#!/bin/bash

#####################################################################################
# linux shell color support.
RED="\\033[31m"
GREEN="\\033[32m"
YELLOW="\\033[33m"
BLACK="\\033[0m"

echo -e "${GREEN}The build summary:${BLACK}"
echo -e "     ${BLACK}+------------------------------------------------------------------------------------${BLACK}"
echo -e "     ${GREEN}For SRS benchmark, gperf, gprof and valgrind, please read:${BLACK}"
echo -e "     ${GREEN}     https://www.jianshu.com/p/6d4a89359352${BLACK}"
echo -e "     ${BLACK}+------------------------------------------------------------------------------------${BLACK}"
echo -e "     |${GREEN}The main server usage: ./objs/srs -c conf/srs.conf, start the srs server${BLACK}"
echo -e "     |     ${GREEN}About HLS, please read https://github.com/ossrs/srs/wiki/v2_CN_DeliveryHLS${BLACK}"
echo -e "     |     ${GREEN}About DVR, please read https://github.com/ossrs/srs/wiki/v3_CN_DVR${BLACK}"
echo -e "     |     ${GREEN}About SSL, please read https://github.com/ossrs/srs/wiki/v1_CN_RTMPHandshake${BLACK}"
echo -e "     |     ${GREEN}About transcoding, please read https://github.com/ossrs/srs/wiki/v3_CN_FFMPEG${BLACK}"
echo -e "     |     ${GREEN}About ingester, please read https://github.com/ossrs/srs/wiki/v1_CN_Ingest${BLACK}"
echo -e "     |     ${GREEN}About http-callback, please read https://github.com/ossrs/srs/wiki/v3_CN_HTTPCallback${BLACK}"
echo -e "     |     ${GREEN}Aoubt http-server, please read https://github.com/ossrs/srs/wiki/v2_CN_HTTPServer${BLACK}"
echo -e "     |     ${GREEN}About http-api, please read https://github.com/ossrs/srs/wiki/v3_CN_HTTPApi${BLACK}"
echo -e "     |     ${GREEN}About stream-caster, please read https://github.com/ossrs/srs/wiki/v2_CN_Streamer${BLACK}"
echo -e "     |     ${YELLOW}(Disabled) About VALGRIND, please read https://github.com/ossrs/state-threads/issues/2${BLACK}"
echo -e "     ${BLACK}+------------------------------------------------------------------------------------${BLACK}"
echo -e "${GREEN}binaries, please read https://github.com/ossrs/srs/wiki/v2_CN_Build${BLACK}"

echo "You can:"
echo "      ./objs/srs -c conf/srs.conf"
echo "                  to start the srs server, with config conf/srs.conf."
