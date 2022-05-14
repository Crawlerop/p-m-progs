// Generated from libavfilter/opencl/nlmeans.cl
const char *ff_opencl_source_nlmeans =
"#line 1 \"libavfilter/opencl/nlmeans.cl\"\n"
"/*\n"
" * This file is part of FFmpeg.\n"
" *\n"
" * FFmpeg is free software; you can redistribute it and/or\n"
" * modify it under the terms of the GNU Lesser General Public\n"
" * License as published by the Free Software Foundation; either\n"
" * version 2.1 of the License, or (at your option) any later version.\n"
" *\n"
" * FFmpeg is distributed in the hope that it will be useful,\n"
" * but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n"
" * Lesser General Public License for more details.\n"
" *\n"
" * You should have received a copy of the GNU Lesser General Public\n"
" * License along with FFmpeg; if not, write to the Free Software\n"
" * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA\n"
" */\n"
"\n"
"const sampler_t sampler = (CLK_NORMALIZED_COORDS_FALSE |\n"
"                           CLK_ADDRESS_CLAMP_TO_EDGE   |\n"
"                           CLK_FILTER_NEAREST);\n"
"\n"
"kernel void horiz_sum(__global uint4 *integral_img,\n"
"                      __read_only image2d_t src,\n"
"                      int width,\n"
"                      int height,\n"
"                      int4 dx,\n"
"                      int4 dy)\n"
"{\n"
"\n"
"    int y = get_global_id(0);\n"
"    int work_size = get_global_size(0);\n"
"\n"
"    uint4 sum = (uint4)(0);\n"
"    float4 s2;\n"
"    for (int i = 0; i < width; i++) {\n"
"        float s1 = read_imagef(src, sampler, (int2)(i, y)).x;\n"
"        s2.x = read_imagef(src, sampler, (int2)(i + dx.x, y + dy.x)).x;\n"
"        s2.y = read_imagef(src, sampler, (int2)(i + dx.y, y + dy.y)).x;\n"
"        s2.z = read_imagef(src, sampler, (int2)(i + dx.z, y + dy.z)).x;\n"
"        s2.w = read_imagef(src, sampler, (int2)(i + dx.w, y + dy.w)).x;\n"
"        sum += convert_uint4((s1 - s2) * (s1 - s2) * 255 * 255);\n"
"        integral_img[y * width + i] = sum;\n"
"    }\n"
"}\n"
"\n"
"kernel void vert_sum(__global uint4 *integral_img,\n"
"                     __global int *overflow,\n"
"                     int width,\n"
"                     int height)\n"
"{\n"
"    int x = get_global_id(0);\n"
"    uint4 sum = 0;\n"
"    for (int i = 0; i < height; i++) {\n"
"        if (any((uint4)UINT_MAX - integral_img[i * width + x] < sum))\n"
"            atomic_inc(overflow);\n"
"        integral_img[i * width + x] += sum;\n"
"        sum = integral_img[i * width + x];\n"
"    }\n"
"}\n"
"\n"
"kernel void weight_accum(global float *sum, global float *weight,\n"
"                         global uint4 *integral_img, __read_only image2d_t src,\n"
"                         int width, int height, int p, float h,\n"
"                         int4 dx, int4 dy)\n"
"{\n"
"    // w(x) = integral_img(x-p, y-p) +\n"
"    //        integral_img(x+p, y+p) -\n"
"    //        integral_img(x+p, y-p) -\n"
"    //        integral_img(x-p, y+p)\n"
"    // total_sum[x] += w(x, y) * src(x + dx, y + dy)\n"
"    // total_weight += w(x, y)\n"
"\n"
"    int x = get_global_id(0);\n"
"    int y = get_global_id(1);\n"
"    int4 xoff = x + dx;\n"
"    int4 yoff = y + dy;\n"
"    uint4 a = 0, b = 0, c = 0, d = 0;\n"
"    uint4 src_pix = 0;\n"
"\n"
"    // out-of-bounding-box?\n"
"    int oobb = (x - p) < 0 || (y - p) < 0 || (y + p) >= height || (x + p) >= width;\n"
"\n"
"    src_pix.x = (int)(255 * read_imagef(src, sampler, (int2)(xoff.x, yoff.x)).x);\n"
"    src_pix.y = (int)(255 * read_imagef(src, sampler, (int2)(xoff.y, yoff.y)).x);\n"
"    src_pix.z = (int)(255 * read_imagef(src, sampler, (int2)(xoff.z, yoff.z)).x);\n"
"    src_pix.w = (int)(255 * read_imagef(src, sampler, (int2)(xoff.w, yoff.w)).x);\n"
"    if (!oobb) {\n"
"        a = integral_img[(y - p) * width + x - p];\n"
"        b = integral_img[(y + p) * width + x - p];\n"
"        c = integral_img[(y - p) * width + x + p];\n"
"        d = integral_img[(y + p) * width + x + p];\n"
"    }\n"
"\n"
"    float4 patch_diff = convert_float4(d + a - c - b);\n"
"    float4 w = native_exp(-patch_diff / (h * h));\n"
"    float w_sum = w.x + w.y + w.z + w.w;\n"
"    weight[y * width + x] += w_sum;\n"
"    sum[y * width + x] += dot(w, convert_float4(src_pix));\n"
"}\n"
"\n"
"kernel void average(__write_only image2d_t dst,\n"
"                    __read_only image2d_t src,\n"
"                    global float *sum, global float *weight) {\n"
"    int x = get_global_id(0);\n"
"    int y = get_global_id(1);\n"
"    int2 dim = get_image_dim(dst);\n"
"\n"
"    float w = weight[y * dim.x + x];\n"
"    float s = sum[y * dim.x + x];\n"
"    float src_pix = read_imagef(src, sampler, (int2)(x, y)).x;\n"
"    float r = (s + src_pix * 255) / (1.0f + w) / 255.0f;\n"
"    if (x < dim.x && y < dim.y)\n"
"        write_imagef(dst, (int2)(x, y), (float4)(r, 0.0f, 0.0f, 1.0f));\n"
"}\n"
;
