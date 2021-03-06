// Generated from libavfilter/opencl/unsharp.cl
const char *ff_opencl_source_unsharp =
"#line 1 \"libavfilter/opencl/unsharp.cl\"\n"
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
"__kernel void unsharp_global(__write_only image2d_t dst,\n"
"                             __read_only  image2d_t src,\n"
"                             int size_x,\n"
"                             int size_y,\n"
"                             float amount,\n"
"                             __constant float *coef_matrix)\n"
"{\n"
"    const sampler_t sampler = (CLK_NORMALIZED_COORDS_FALSE |\n"
"                               CLK_FILTER_NEAREST);\n"
"    int2 loc    = (int2)(get_global_id(0), get_global_id(1));\n"
"    int2 centre = (int2)(size_x / 2, size_y / 2);\n"
"\n"
"    float4 val = read_imagef(src, sampler, loc);\n"
"    float4 sum = 0.0f;\n"
"    int x, y;\n"
"\n"
"    for (y = 0; y < size_y; y++) {\n"
"        for (x = 0; x < size_x; x++) {\n"
"            int2 pos = loc + (int2)(x, y) - centre;\n"
"            sum += coef_matrix[y * size_x + x] *\n"
"                read_imagef(src, sampler, pos);\n"
"        }\n"
"    }\n"
"\n"
"    write_imagef(dst, loc, val + (val - sum) * amount);\n"
"}\n"
"\n"
"__kernel void unsharp_local(__write_only image2d_t dst,\n"
"                            __read_only  image2d_t src,\n"
"                            int size_x,\n"
"                            int size_y,\n"
"                            float amount,\n"
"                            __constant float *coef_x,\n"
"                            __constant float *coef_y)\n"
"{\n"
"    const sampler_t sampler = (CLK_NORMALIZED_COORDS_FALSE |\n"
"                               CLK_ADDRESS_CLAMP_TO_EDGE |\n"
"                               CLK_FILTER_NEAREST);\n"
"    int2 block = (int2)(get_group_id(0), get_group_id(1)) * 16;\n"
"    int2 pos   = (int2)(get_local_id(0), get_local_id(1));\n"
"\n"
"    __local float4 tmp[32][32];\n"
"\n"
"    int rad_x = size_x / 2;\n"
"    int rad_y = size_y / 2;\n"
"    int x, y;\n"
"\n"
"    for (y = 0; y <= 1; y++) {\n"
"        for (x = 0; x <= 1; x++) {\n"
"            tmp[pos.y + 16 * y][pos.x + 16 * x] =\n"
"                read_imagef(src, sampler, block + pos + (int2)(16 * x - 8, 16 * y - 8));\n"
"        }\n"
"    }\n"
"\n"
"    barrier(CLK_LOCAL_MEM_FENCE);\n"
"\n"
"    float4 val = tmp[pos.y + 8][pos.x + 8];\n"
"\n"
"    float4 horiz[2];\n"
"    for (y = 0; y <= 1; y++) {\n"
"        horiz[y] = 0.0f;\n"
"        for (x = 0; x < size_x; x++)\n"
"            horiz[y] += coef_x[x] * tmp[pos.y + y * 16][pos.x + 8 + x - rad_x];\n"
"    }\n"
"\n"
"    barrier(CLK_LOCAL_MEM_FENCE);\n"
"\n"
"    for (y = 0; y <= 1; y++) {\n"
"        tmp[pos.y + y * 16][pos.x + 8] = horiz[y];\n"
"    }\n"
"\n"
"    barrier(CLK_LOCAL_MEM_FENCE);\n"
"\n"
"    float4 sum = 0.0f;\n"
"    for (y = 0; y < size_y; y++)\n"
"        sum += coef_y[y] * tmp[pos.y + 8 + y - rad_y][pos.x + 8];\n"
"\n"
"    if (block.x + pos.x < get_image_width(dst) &&\n"
"        block.y + pos.y < get_image_height(dst))\n"
"        write_imagef(dst, block + pos, val + (val - sum) * amount);\n"
"}\n"
;
