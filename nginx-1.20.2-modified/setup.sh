#!/bin/bash

# --with-cc-opt="-g -O2 -ffile-prefix-map=/home/wrapper/workspace/h_server/nginx-1.18.0=. -flto=auto -ffat-lto-objects -flto=auto -ffat-lto-objects -fstack-protector-strong -Wformat -Werror=format-security -fPIC -Wdate-time -D_FORTIFY_SOURCE=2" \
# --with-ld-opt="-Wl,-Bsymbolic-functions -flto=auto -ffat-lto-objects -flto=auto -Wl,-z,relro -Wl,-z,now -fPIC" \
# --prefix=/usr/share/nginx \
# --conf-path=/etc/nginx/nginx.conf \
# --http-log-path=/var/log/nginx/access.log \
# --error-log-path=/var/log/nginx/error.log \
# --lock-path=/var/lock/nginx.lock \
# --pid-path=/run/nginx.pid \
# --modules-path=/usr/lib/nginx/modules \
# --http-client-body-temp-path=/var/lib/nginx/body \
# --http-fastcgi-temp-path=/var/lib/nginx/fastcgi \
# --http-proxy-temp-path=/var/lib/nginx/proxy \
# --http-scgi-temp-path=/var/lib/nginx/scgi \
# --http-uwsgi-temp-path=/var/lib/nginx/uwsgi \
./configure \
 --with-compat \
 --with-debug \
 --with-pcre-jit \
 --with-http_ssl_module \
 --with-http_stub_status_module \
 --with-http_realip_module \
 --with-http_auth_request_module \
 --with-http_v2_module \
 --with-http_dav_module \
 --with-http_slice_module \
 --with-threads \
 --add-dynamic-module=./sc_mods/http-geoip2 \
 --with-http_addition_module \
 --with-http_flv_module \
 --with-http_geoip_module=dynamic \
 --with-http_gunzip_module \
 --with-http_gzip_static_module \
 --with-http_image_filter_module=dynamic \
 --with-http_mp4_module \
 --with-http_perl_module=dynamic \
 --with-http_random_index_module \
 --with-http_secure_link_module \
 --with-http_sub_module \
 --with-http_xslt_module=dynamic \
 --with-mail=dynamic \
 --with-mail_ssl_module \
 --with-stream=dynamic \
 --with-stream_geoip_module=dynamic \
 --with-stream_ssl_module \
 --with-stream_ssl_preread_module \
 --with-file-aio \
 --add-module=./sc_mods/http-upstream-check \
 --add-dynamic-module=./sc_mods/http-headers-more-filter \
 --add-dynamic-module=./sc_mods/http-auth-pam \
 --add-dynamic-module=./sc_mods/http-cache-purge \
 --add-dynamic-module=./sc_mods/http-dav-ext \
 --add-dynamic-module=./sc_mods/http-ndk \
 --add-dynamic-module=./sc_mods/http-echo \
 --add-dynamic-module=./sc_mods/http-fancyindex \
 --add-dynamic-module=./sc_mods/nchan \
 --add-dynamic-module=./sc_mods/http-uploadprogress \
 --add-dynamic-module=./sc_mods/http-upstream-fair \
 --add-dynamic-module=./sc_mods/vod \
 --add-dynamic-module=./sc_mods/http-subs-filter 
 