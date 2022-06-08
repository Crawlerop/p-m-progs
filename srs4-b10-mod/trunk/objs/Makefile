
.PHONY:  srs_hls_ingester srs_mp4_parser

GCC = gcc
CXX = g++
AR = ar
LINK = g++
CXXFLAGS =  -ansi -Wall -Wno-deprecated-declarations -g -O0

.PHONY: default srs srs_ingest_hls

default:

#####################################################################################
# The module CORE.
#####################################################################################

# INCS for CORE, headers of module and its depends to compile
CORE_MODULE_INCS = -Isrc/core 
CORE_INCS = -Isrc/core 
CORE_LIBS_INCS = -Iobjs 

# DEPS for CORE, the depends of make schema
CORE_DEPS =  src/core/srs_core.hpp src/core/srs_core_version4.hpp src/core/srs_core_autofree.hpp src/core/srs_core_performance.hpp src/core/srs_core_time.hpp

# OBJ for CORE, each object file
objs/src/core/srs_core.o: $(CORE_DEPS) src/core/srs_core.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(CORE_INCS)\
    $(CORE_LIBS_INCS)\
    -o objs/src/core/srs_core.o \
    src/core/srs_core.cpp
objs/src/core/srs_core_version4.o: $(CORE_DEPS) src/core/srs_core_version4.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(CORE_INCS)\
    $(CORE_LIBS_INCS)\
    -o objs/src/core/srs_core_version4.o \
    src/core/srs_core_version4.cpp
objs/src/core/srs_core_autofree.o: $(CORE_DEPS) src/core/srs_core_autofree.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(CORE_INCS)\
    $(CORE_LIBS_INCS)\
    -o objs/src/core/srs_core_autofree.o \
    src/core/srs_core_autofree.cpp
objs/src/core/srs_core_performance.o: $(CORE_DEPS) src/core/srs_core_performance.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(CORE_INCS)\
    $(CORE_LIBS_INCS)\
    -o objs/src/core/srs_core_performance.o \
    src/core/srs_core_performance.cpp
objs/src/core/srs_core_time.o: $(CORE_DEPS) src/core/srs_core_time.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(CORE_INCS)\
    $(CORE_LIBS_INCS)\
    -o objs/src/core/srs_core_time.o \
    src/core/srs_core_time.cpp

#####################################################################################
# The module KERNEL.
#####################################################################################

# INCS for KERNEL, headers of module and its depends to compile
KERNEL_MODULE_INCS = -Isrc/kernel 
KERNEL_INCS = -Isrc/kernel $(CORE_MODULE_INCS)
KERNEL_LIBS_INCS = -Iobjs -Iobjs/openssl/include 

# DEPS for KERNEL, the depends of make schema
KERNEL_DEPS =  src/kernel/srs_kernel_error.hpp src/kernel/srs_kernel_log.hpp src/kernel/srs_kernel_buffer.hpp src/kernel/srs_kernel_utility.hpp src/kernel/srs_kernel_flv.hpp src/kernel/srs_kernel_codec.hpp src/kernel/srs_kernel_io.hpp src/kernel/srs_kernel_consts.hpp src/kernel/srs_kernel_aac.hpp src/kernel/srs_kernel_mp3.hpp src/kernel/srs_kernel_ts.hpp src/kernel/srs_kernel_stream.hpp src/kernel/srs_kernel_balance.hpp src/kernel/srs_kernel_mp4.hpp src/kernel/srs_kernel_file.hpp src/kernel/srs_kernel_kbps.hpp src/kernel/srs_kernel_rtc_rtp.hpp src/kernel/srs_kernel_rtc_rtcp.hpp $(CORE_DEPS) 

# OBJ for KERNEL, each object file
objs/src/kernel/srs_kernel_error.o: $(KERNEL_DEPS) src/kernel/srs_kernel_error.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_error.o \
    src/kernel/srs_kernel_error.cpp
objs/src/kernel/srs_kernel_log.o: $(KERNEL_DEPS) src/kernel/srs_kernel_log.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_log.o \
    src/kernel/srs_kernel_log.cpp
objs/src/kernel/srs_kernel_buffer.o: $(KERNEL_DEPS) src/kernel/srs_kernel_buffer.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_buffer.o \
    src/kernel/srs_kernel_buffer.cpp
objs/src/kernel/srs_kernel_utility.o: $(KERNEL_DEPS) src/kernel/srs_kernel_utility.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_utility.o \
    src/kernel/srs_kernel_utility.cpp
objs/src/kernel/srs_kernel_flv.o: $(KERNEL_DEPS) src/kernel/srs_kernel_flv.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_flv.o \
    src/kernel/srs_kernel_flv.cpp
objs/src/kernel/srs_kernel_codec.o: $(KERNEL_DEPS) src/kernel/srs_kernel_codec.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_codec.o \
    src/kernel/srs_kernel_codec.cpp
objs/src/kernel/srs_kernel_io.o: $(KERNEL_DEPS) src/kernel/srs_kernel_io.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_io.o \
    src/kernel/srs_kernel_io.cpp
objs/src/kernel/srs_kernel_consts.o: $(KERNEL_DEPS) src/kernel/srs_kernel_consts.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_consts.o \
    src/kernel/srs_kernel_consts.cpp
objs/src/kernel/srs_kernel_aac.o: $(KERNEL_DEPS) src/kernel/srs_kernel_aac.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_aac.o \
    src/kernel/srs_kernel_aac.cpp
objs/src/kernel/srs_kernel_mp3.o: $(KERNEL_DEPS) src/kernel/srs_kernel_mp3.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_mp3.o \
    src/kernel/srs_kernel_mp3.cpp
objs/src/kernel/srs_kernel_ts.o: $(KERNEL_DEPS) src/kernel/srs_kernel_ts.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_ts.o \
    src/kernel/srs_kernel_ts.cpp
objs/src/kernel/srs_kernel_stream.o: $(KERNEL_DEPS) src/kernel/srs_kernel_stream.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_stream.o \
    src/kernel/srs_kernel_stream.cpp
objs/src/kernel/srs_kernel_balance.o: $(KERNEL_DEPS) src/kernel/srs_kernel_balance.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_balance.o \
    src/kernel/srs_kernel_balance.cpp
objs/src/kernel/srs_kernel_mp4.o: $(KERNEL_DEPS) src/kernel/srs_kernel_mp4.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_mp4.o \
    src/kernel/srs_kernel_mp4.cpp
objs/src/kernel/srs_kernel_file.o: $(KERNEL_DEPS) src/kernel/srs_kernel_file.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_file.o \
    src/kernel/srs_kernel_file.cpp
objs/src/kernel/srs_kernel_kbps.o: $(KERNEL_DEPS) src/kernel/srs_kernel_kbps.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_kbps.o \
    src/kernel/srs_kernel_kbps.cpp
objs/src/kernel/srs_kernel_rtc_rtp.o: $(KERNEL_DEPS) src/kernel/srs_kernel_rtc_rtp.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_rtc_rtp.o \
    src/kernel/srs_kernel_rtc_rtp.cpp
objs/src/kernel/srs_kernel_rtc_rtcp.o: $(KERNEL_DEPS) src/kernel/srs_kernel_rtc_rtcp.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(KERNEL_INCS)\
    $(KERNEL_LIBS_INCS)\
    -o objs/src/kernel/srs_kernel_rtc_rtcp.o \
    src/kernel/srs_kernel_rtc_rtcp.cpp

#####################################################################################
# The module PROTOCOL.
#####################################################################################

# INCS for PROTOCOL, headers of module and its depends to compile
PROTOCOL_MODULE_INCS = -Isrc/protocol 
PROTOCOL_INCS = -Isrc/protocol $(CORE_MODULE_INCS)$(KERNEL_MODULE_INCS)
PROTOCOL_LIBS_INCS = -Iobjs -Iobjs/st -Iobjs/openssl/include -Iobjs/srtp2/include 

# DEPS for PROTOCOL, the depends of make schema
PROTOCOL_DEPS =  src/protocol/srs_protocol_amf0.hpp src/protocol/srs_protocol_io.hpp src/protocol/srs_rtmp_stack.hpp src/protocol/srs_rtmp_handshake.hpp src/protocol/srs_protocol_utility.hpp src/protocol/srs_rtmp_msg_array.hpp src/protocol/srs_protocol_stream.hpp src/protocol/srs_raw_avc.hpp src/protocol/srs_rtsp_stack.hpp src/protocol/srs_http_stack.hpp src/protocol/srs_protocol_kbps.hpp src/protocol/srs_protocol_json.hpp src/protocol/srs_protocol_format.hpp src/protocol/srs_service_log.hpp src/protocol/srs_service_st.hpp src/protocol/srs_service_http_client.hpp src/protocol/srs_service_http_conn.hpp src/protocol/srs_service_rtmp_conn.hpp src/protocol/srs_service_utility.hpp src/protocol/srs_service_conn.hpp src/protocol/srs_rtc_stun_stack.hpp $(CORE_DEPS)  $(KERNEL_DEPS) 

# OBJ for PROTOCOL, each object file
objs/src/protocol/srs_protocol_amf0.o: $(PROTOCOL_DEPS) src/protocol/srs_protocol_amf0.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_protocol_amf0.o \
    src/protocol/srs_protocol_amf0.cpp
objs/src/protocol/srs_protocol_io.o: $(PROTOCOL_DEPS) src/protocol/srs_protocol_io.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_protocol_io.o \
    src/protocol/srs_protocol_io.cpp
objs/src/protocol/srs_rtmp_stack.o: $(PROTOCOL_DEPS) src/protocol/srs_rtmp_stack.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_rtmp_stack.o \
    src/protocol/srs_rtmp_stack.cpp
objs/src/protocol/srs_rtmp_handshake.o: $(PROTOCOL_DEPS) src/protocol/srs_rtmp_handshake.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_rtmp_handshake.o \
    src/protocol/srs_rtmp_handshake.cpp
objs/src/protocol/srs_protocol_utility.o: $(PROTOCOL_DEPS) src/protocol/srs_protocol_utility.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_protocol_utility.o \
    src/protocol/srs_protocol_utility.cpp
objs/src/protocol/srs_rtmp_msg_array.o: $(PROTOCOL_DEPS) src/protocol/srs_rtmp_msg_array.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_rtmp_msg_array.o \
    src/protocol/srs_rtmp_msg_array.cpp
objs/src/protocol/srs_protocol_stream.o: $(PROTOCOL_DEPS) src/protocol/srs_protocol_stream.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_protocol_stream.o \
    src/protocol/srs_protocol_stream.cpp
objs/src/protocol/srs_raw_avc.o: $(PROTOCOL_DEPS) src/protocol/srs_raw_avc.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_raw_avc.o \
    src/protocol/srs_raw_avc.cpp
objs/src/protocol/srs_rtsp_stack.o: $(PROTOCOL_DEPS) src/protocol/srs_rtsp_stack.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_rtsp_stack.o \
    src/protocol/srs_rtsp_stack.cpp
objs/src/protocol/srs_http_stack.o: $(PROTOCOL_DEPS) src/protocol/srs_http_stack.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_http_stack.o \
    src/protocol/srs_http_stack.cpp
objs/src/protocol/srs_protocol_kbps.o: $(PROTOCOL_DEPS) src/protocol/srs_protocol_kbps.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_protocol_kbps.o \
    src/protocol/srs_protocol_kbps.cpp
objs/src/protocol/srs_protocol_json.o: $(PROTOCOL_DEPS) src/protocol/srs_protocol_json.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_protocol_json.o \
    src/protocol/srs_protocol_json.cpp
objs/src/protocol/srs_protocol_format.o: $(PROTOCOL_DEPS) src/protocol/srs_protocol_format.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_protocol_format.o \
    src/protocol/srs_protocol_format.cpp
objs/src/protocol/srs_service_log.o: $(PROTOCOL_DEPS) src/protocol/srs_service_log.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_service_log.o \
    src/protocol/srs_service_log.cpp
objs/src/protocol/srs_service_st.o: $(PROTOCOL_DEPS) src/protocol/srs_service_st.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_service_st.o \
    src/protocol/srs_service_st.cpp
objs/src/protocol/srs_service_http_client.o: $(PROTOCOL_DEPS) src/protocol/srs_service_http_client.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_service_http_client.o \
    src/protocol/srs_service_http_client.cpp
objs/src/protocol/srs_service_http_conn.o: $(PROTOCOL_DEPS) src/protocol/srs_service_http_conn.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_service_http_conn.o \
    src/protocol/srs_service_http_conn.cpp
objs/src/protocol/srs_service_rtmp_conn.o: $(PROTOCOL_DEPS) src/protocol/srs_service_rtmp_conn.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_service_rtmp_conn.o \
    src/protocol/srs_service_rtmp_conn.cpp
objs/src/protocol/srs_service_utility.o: $(PROTOCOL_DEPS) src/protocol/srs_service_utility.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_service_utility.o \
    src/protocol/srs_service_utility.cpp
objs/src/protocol/srs_service_conn.o: $(PROTOCOL_DEPS) src/protocol/srs_service_conn.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_service_conn.o \
    src/protocol/srs_service_conn.cpp
objs/src/protocol/srs_rtc_stun_stack.o: $(PROTOCOL_DEPS) src/protocol/srs_rtc_stun_stack.cpp 
	$(CXX) -c $(CXXFLAGS) \
    $(PROTOCOL_INCS)\
    $(PROTOCOL_LIBS_INCS)\
    -o objs/src/protocol/srs_rtc_stun_stack.o \
    src/protocol/srs_rtc_stun_stack.cpp

#####################################################################################
# The module APP.
#####################################################################################

# INCS for APP, headers of module and its depends to compile
APP_MODULE_INCS = -Isrc/app 
APP_INCS = -Isrc/app $(CORE_MODULE_INCS)$(KERNEL_MODULE_INCS)$(PROTOCOL_MODULE_INCS)
APP_LIBS_INCS = -Iobjs -Iobjs/st -Iobjs/openssl/include -Iobjs/srtp2/include 

# DEPS for APP, the depends of make schema
APP_DEPS =  src/app/srs_app_server.hpp src/app/srs_app_conn.hpp src/app/srs_app_rtmp_conn.hpp src/app/srs_app_source.hpp src/app/srs_app_refer.hpp src/app/srs_app_hls.hpp src/app/srs_app_forward.hpp src/app/srs_app_encoder.hpp src/app/srs_app_http_stream.hpp src/app/srs_app_bandwidth.hpp src/app/srs_app_st.hpp src/app/srs_app_log.hpp src/app/srs_app_config.hpp src/app/srs_app_pithy_print.hpp src/app/srs_app_reload.hpp src/app/srs_app_http_api.hpp src/app/srs_app_http_conn.hpp src/app/srs_app_http_hooks.hpp src/app/srs_app_ingest.hpp src/app/srs_app_ffmpeg.hpp src/app/srs_app_utility.hpp src/app/srs_app_edge.hpp src/app/srs_app_heartbeat.hpp src/app/srs_app_empty.hpp src/app/srs_app_http_client.hpp src/app/srs_app_http_static.hpp src/app/srs_app_recv_thread.hpp src/app/srs_app_security.hpp src/app/srs_app_statistic.hpp src/app/srs_app_hds.hpp src/app/srs_app_mpegts_udp.hpp src/app/srs_app_listener.hpp src/app/srs_app_async_call.hpp src/app/srs_app_caster_flv.hpp src/app/srs_app_latest_version.hpp src/app/srs_app_uuid.hpp src/app/srs_app_process.hpp src/app/srs_app_ng_exec.hpp src/app/srs_app_hourglass.hpp src/app/srs_app_dash.hpp src/app/srs_app_fragment.hpp src/app/srs_app_dvr.hpp src/app/srs_app_coworkers.hpp src/app/srs_app_hybrid.hpp src/app/srs_app_threads.hpp src/app/srs_app_rtc_conn.hpp src/app/srs_app_rtc_dtls.hpp src/app/srs_app_rtc_sdp.hpp src/app/srs_app_rtc_queue.hpp src/app/srs_app_rtc_server.hpp src/app/srs_app_rtc_source.hpp src/app/srs_app_rtc_api.hpp $(CORE_DEPS)  $(KERNEL_DEPS)  $(PROTOCOL_DEPS) 

# OBJ for APP, each object file
objs/src/app/srs_app_server.o: $(APP_DEPS) src/app/srs_app_server.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_server.o \
    src/app/srs_app_server.cpp
objs/src/app/srs_app_conn.o: $(APP_DEPS) src/app/srs_app_conn.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_conn.o \
    src/app/srs_app_conn.cpp
objs/src/app/srs_app_rtmp_conn.o: $(APP_DEPS) src/app/srs_app_rtmp_conn.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_rtmp_conn.o \
    src/app/srs_app_rtmp_conn.cpp
objs/src/app/srs_app_source.o: $(APP_DEPS) src/app/srs_app_source.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_source.o \
    src/app/srs_app_source.cpp
objs/src/app/srs_app_refer.o: $(APP_DEPS) src/app/srs_app_refer.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_refer.o \
    src/app/srs_app_refer.cpp
objs/src/app/srs_app_hls.o: $(APP_DEPS) src/app/srs_app_hls.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_hls.o \
    src/app/srs_app_hls.cpp
objs/src/app/srs_app_forward.o: $(APP_DEPS) src/app/srs_app_forward.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_forward.o \
    src/app/srs_app_forward.cpp
objs/src/app/srs_app_encoder.o: $(APP_DEPS) src/app/srs_app_encoder.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_encoder.o \
    src/app/srs_app_encoder.cpp
objs/src/app/srs_app_http_stream.o: $(APP_DEPS) src/app/srs_app_http_stream.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_http_stream.o \
    src/app/srs_app_http_stream.cpp
objs/src/app/srs_app_bandwidth.o: $(APP_DEPS) src/app/srs_app_bandwidth.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_bandwidth.o \
    src/app/srs_app_bandwidth.cpp
objs/src/app/srs_app_st.o: $(APP_DEPS) src/app/srs_app_st.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_st.o \
    src/app/srs_app_st.cpp
objs/src/app/srs_app_log.o: $(APP_DEPS) src/app/srs_app_log.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_log.o \
    src/app/srs_app_log.cpp
objs/src/app/srs_app_config.o: $(APP_DEPS) src/app/srs_app_config.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_config.o \
    src/app/srs_app_config.cpp
objs/src/app/srs_app_pithy_print.o: $(APP_DEPS) src/app/srs_app_pithy_print.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_pithy_print.o \
    src/app/srs_app_pithy_print.cpp
objs/src/app/srs_app_reload.o: $(APP_DEPS) src/app/srs_app_reload.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_reload.o \
    src/app/srs_app_reload.cpp
objs/src/app/srs_app_http_api.o: $(APP_DEPS) src/app/srs_app_http_api.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_http_api.o \
    src/app/srs_app_http_api.cpp
objs/src/app/srs_app_http_conn.o: $(APP_DEPS) src/app/srs_app_http_conn.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_http_conn.o \
    src/app/srs_app_http_conn.cpp
objs/src/app/srs_app_http_hooks.o: $(APP_DEPS) src/app/srs_app_http_hooks.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_http_hooks.o \
    src/app/srs_app_http_hooks.cpp
objs/src/app/srs_app_ingest.o: $(APP_DEPS) src/app/srs_app_ingest.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_ingest.o \
    src/app/srs_app_ingest.cpp
objs/src/app/srs_app_ffmpeg.o: $(APP_DEPS) src/app/srs_app_ffmpeg.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_ffmpeg.o \
    src/app/srs_app_ffmpeg.cpp
objs/src/app/srs_app_utility.o: $(APP_DEPS) src/app/srs_app_utility.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_utility.o \
    src/app/srs_app_utility.cpp
objs/src/app/srs_app_edge.o: $(APP_DEPS) src/app/srs_app_edge.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_edge.o \
    src/app/srs_app_edge.cpp
objs/src/app/srs_app_heartbeat.o: $(APP_DEPS) src/app/srs_app_heartbeat.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_heartbeat.o \
    src/app/srs_app_heartbeat.cpp
objs/src/app/srs_app_empty.o: $(APP_DEPS) src/app/srs_app_empty.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_empty.o \
    src/app/srs_app_empty.cpp
objs/src/app/srs_app_http_client.o: $(APP_DEPS) src/app/srs_app_http_client.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_http_client.o \
    src/app/srs_app_http_client.cpp
objs/src/app/srs_app_http_static.o: $(APP_DEPS) src/app/srs_app_http_static.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_http_static.o \
    src/app/srs_app_http_static.cpp
objs/src/app/srs_app_recv_thread.o: $(APP_DEPS) src/app/srs_app_recv_thread.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_recv_thread.o \
    src/app/srs_app_recv_thread.cpp
objs/src/app/srs_app_security.o: $(APP_DEPS) src/app/srs_app_security.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_security.o \
    src/app/srs_app_security.cpp
objs/src/app/srs_app_statistic.o: $(APP_DEPS) src/app/srs_app_statistic.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_statistic.o \
    src/app/srs_app_statistic.cpp
objs/src/app/srs_app_hds.o: $(APP_DEPS) src/app/srs_app_hds.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_hds.o \
    src/app/srs_app_hds.cpp
objs/src/app/srs_app_mpegts_udp.o: $(APP_DEPS) src/app/srs_app_mpegts_udp.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_mpegts_udp.o \
    src/app/srs_app_mpegts_udp.cpp
objs/src/app/srs_app_listener.o: $(APP_DEPS) src/app/srs_app_listener.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_listener.o \
    src/app/srs_app_listener.cpp
objs/src/app/srs_app_async_call.o: $(APP_DEPS) src/app/srs_app_async_call.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_async_call.o \
    src/app/srs_app_async_call.cpp
objs/src/app/srs_app_caster_flv.o: $(APP_DEPS) src/app/srs_app_caster_flv.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_caster_flv.o \
    src/app/srs_app_caster_flv.cpp
objs/src/app/srs_app_latest_version.o: $(APP_DEPS) src/app/srs_app_latest_version.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_latest_version.o \
    src/app/srs_app_latest_version.cpp
objs/src/app/srs_app_uuid.o: $(APP_DEPS) src/app/srs_app_uuid.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_uuid.o \
    src/app/srs_app_uuid.cpp
objs/src/app/srs_app_process.o: $(APP_DEPS) src/app/srs_app_process.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_process.o \
    src/app/srs_app_process.cpp
objs/src/app/srs_app_ng_exec.o: $(APP_DEPS) src/app/srs_app_ng_exec.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_ng_exec.o \
    src/app/srs_app_ng_exec.cpp
objs/src/app/srs_app_hourglass.o: $(APP_DEPS) src/app/srs_app_hourglass.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_hourglass.o \
    src/app/srs_app_hourglass.cpp
objs/src/app/srs_app_dash.o: $(APP_DEPS) src/app/srs_app_dash.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_dash.o \
    src/app/srs_app_dash.cpp
objs/src/app/srs_app_fragment.o: $(APP_DEPS) src/app/srs_app_fragment.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_fragment.o \
    src/app/srs_app_fragment.cpp
objs/src/app/srs_app_dvr.o: $(APP_DEPS) src/app/srs_app_dvr.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_dvr.o \
    src/app/srs_app_dvr.cpp
objs/src/app/srs_app_coworkers.o: $(APP_DEPS) src/app/srs_app_coworkers.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_coworkers.o \
    src/app/srs_app_coworkers.cpp
objs/src/app/srs_app_hybrid.o: $(APP_DEPS) src/app/srs_app_hybrid.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_hybrid.o \
    src/app/srs_app_hybrid.cpp
objs/src/app/srs_app_threads.o: $(APP_DEPS) src/app/srs_app_threads.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_threads.o \
    src/app/srs_app_threads.cpp
objs/src/app/srs_app_rtc_conn.o: $(APP_DEPS) src/app/srs_app_rtc_conn.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_rtc_conn.o \
    src/app/srs_app_rtc_conn.cpp
objs/src/app/srs_app_rtc_dtls.o: $(APP_DEPS) src/app/srs_app_rtc_dtls.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_rtc_dtls.o \
    src/app/srs_app_rtc_dtls.cpp
objs/src/app/srs_app_rtc_sdp.o: $(APP_DEPS) src/app/srs_app_rtc_sdp.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_rtc_sdp.o \
    src/app/srs_app_rtc_sdp.cpp
objs/src/app/srs_app_rtc_queue.o: $(APP_DEPS) src/app/srs_app_rtc_queue.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_rtc_queue.o \
    src/app/srs_app_rtc_queue.cpp
objs/src/app/srs_app_rtc_server.o: $(APP_DEPS) src/app/srs_app_rtc_server.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_rtc_server.o \
    src/app/srs_app_rtc_server.cpp
objs/src/app/srs_app_rtc_source.o: $(APP_DEPS) src/app/srs_app_rtc_source.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_rtc_source.o \
    src/app/srs_app_rtc_source.cpp
objs/src/app/srs_app_rtc_api.o: $(APP_DEPS) src/app/srs_app_rtc_api.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(APP_INCS)\
    $(APP_LIBS_INCS)\
    -o objs/src/app/srs_app_rtc_api.o \
    src/app/srs_app_rtc_api.cpp

#####################################################################################
# The module SERVER.
#####################################################################################

# INCS for SERVER, headers of module and its depends to compile
SERVER_MODULE_INCS = -Isrc/main 
SERVER_INCS = -Isrc/main $(CORE_MODULE_INCS)$(KERNEL_MODULE_INCS)$(PROTOCOL_MODULE_INCS)$(APP_MODULE_INCS)
SERVER_LIBS_INCS = -Iobjs -Iobjs/st -Iobjs/openssl/include -Iobjs/srtp2/include 

# DEPS for SERVER, the depends of make schema
SERVER_DEPS =  $(CORE_DEPS)  $(KERNEL_DEPS)  $(PROTOCOL_DEPS)  $(APP_DEPS) 

# OBJ for SERVER, each object file
objs/src/main/srs_main_server.o: $(SERVER_DEPS) src/main/srs_main_server.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(SERVER_INCS)\
    $(SERVER_LIBS_INCS)\
    -o objs/src/main/srs_main_server.o \
    src/main/srs_main_server.cpp

#####################################################################################
# The module MAIN.
#####################################################################################

# INCS for MAIN, headers of module and its depends to compile
MAIN_MODULE_INCS = -Isrc/main 
MAIN_INCS = -Isrc/main $(CORE_MODULE_INCS)$(KERNEL_MODULE_INCS)$(PROTOCOL_MODULE_INCS)
MAIN_LIBS_INCS = -Iobjs -Iobjs/st -Iobjs/openssl/include -Iobjs/srtp2/include 

# DEPS for MAIN, the depends of make schema
MAIN_DEPS =  $(CORE_DEPS)  $(KERNEL_DEPS)  $(PROTOCOL_DEPS) 

# OBJ for MAIN, each object file
objs/src/main/srs_main_ingest_hls.o: $(MAIN_DEPS) src/main/srs_main_ingest_hls.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(MAIN_INCS)\
    $(MAIN_LIBS_INCS)\
    -o objs/src/main/srs_main_ingest_hls.o \
    src/main/srs_main_ingest_hls.cpp
objs/src/main/srs_main_mp4_parser.o: $(MAIN_DEPS) src/main/srs_main_mp4_parser.cpp 
	$(CXX) -c $(CXXFLAGS)   \
    $(MAIN_INCS)\
    $(MAIN_LIBS_INCS)\
    -o objs/src/main/srs_main_mp4_parser.o \
    src/main/srs_main_mp4_parser.cpp

# build objs/srs
srs: objs/srs

objs/srs: objs/src/core/srs_core.o objs/src/core/srs_core_version4.o objs/src/core/srs_core_autofree.o objs/src/core/srs_core_performance.o objs/src/core/srs_core_time.o objs/src/kernel/srs_kernel_error.o objs/src/kernel/srs_kernel_log.o objs/src/kernel/srs_kernel_buffer.o objs/src/kernel/srs_kernel_utility.o objs/src/kernel/srs_kernel_flv.o objs/src/kernel/srs_kernel_codec.o objs/src/kernel/srs_kernel_io.o objs/src/kernel/srs_kernel_consts.o objs/src/kernel/srs_kernel_aac.o objs/src/kernel/srs_kernel_mp3.o objs/src/kernel/srs_kernel_ts.o objs/src/kernel/srs_kernel_stream.o objs/src/kernel/srs_kernel_balance.o objs/src/kernel/srs_kernel_mp4.o objs/src/kernel/srs_kernel_file.o objs/src/kernel/srs_kernel_kbps.o objs/src/kernel/srs_kernel_rtc_rtp.o objs/src/kernel/srs_kernel_rtc_rtcp.o objs/src/protocol/srs_protocol_amf0.o objs/src/protocol/srs_protocol_io.o objs/src/protocol/srs_rtmp_stack.o objs/src/protocol/srs_rtmp_handshake.o objs/src/protocol/srs_protocol_utility.o objs/src/protocol/srs_rtmp_msg_array.o objs/src/protocol/srs_protocol_stream.o objs/src/protocol/srs_raw_avc.o objs/src/protocol/srs_rtsp_stack.o objs/src/protocol/srs_http_stack.o objs/src/protocol/srs_protocol_kbps.o objs/src/protocol/srs_protocol_json.o objs/src/protocol/srs_protocol_format.o objs/src/protocol/srs_service_log.o objs/src/protocol/srs_service_st.o objs/src/protocol/srs_service_http_client.o objs/src/protocol/srs_service_http_conn.o objs/src/protocol/srs_service_rtmp_conn.o objs/src/protocol/srs_service_utility.o objs/src/protocol/srs_service_conn.o objs/src/protocol/srs_rtc_stun_stack.o objs/src/app/srs_app_server.o objs/src/app/srs_app_conn.o objs/src/app/srs_app_rtmp_conn.o objs/src/app/srs_app_source.o objs/src/app/srs_app_refer.o objs/src/app/srs_app_hls.o objs/src/app/srs_app_forward.o objs/src/app/srs_app_encoder.o objs/src/app/srs_app_http_stream.o objs/src/app/srs_app_bandwidth.o objs/src/app/srs_app_st.o objs/src/app/srs_app_log.o objs/src/app/srs_app_config.o objs/src/app/srs_app_pithy_print.o objs/src/app/srs_app_reload.o objs/src/app/srs_app_http_api.o objs/src/app/srs_app_http_conn.o objs/src/app/srs_app_http_hooks.o objs/src/app/srs_app_ingest.o objs/src/app/srs_app_ffmpeg.o objs/src/app/srs_app_utility.o objs/src/app/srs_app_edge.o objs/src/app/srs_app_heartbeat.o objs/src/app/srs_app_empty.o objs/src/app/srs_app_http_client.o objs/src/app/srs_app_http_static.o objs/src/app/srs_app_recv_thread.o objs/src/app/srs_app_security.o objs/src/app/srs_app_statistic.o objs/src/app/srs_app_hds.o objs/src/app/srs_app_mpegts_udp.o objs/src/app/srs_app_listener.o objs/src/app/srs_app_async_call.o objs/src/app/srs_app_caster_flv.o objs/src/app/srs_app_latest_version.o objs/src/app/srs_app_uuid.o objs/src/app/srs_app_process.o objs/src/app/srs_app_ng_exec.o objs/src/app/srs_app_hourglass.o objs/src/app/srs_app_dash.o objs/src/app/srs_app_fragment.o objs/src/app/srs_app_dvr.o objs/src/app/srs_app_coworkers.o objs/src/app/srs_app_hybrid.o objs/src/app/srs_app_threads.o objs/src/app/srs_app_rtc_conn.o objs/src/app/srs_app_rtc_dtls.o objs/src/app/srs_app_rtc_sdp.o objs/src/app/srs_app_rtc_queue.o objs/src/app/srs_app_rtc_server.o objs/src/app/srs_app_rtc_source.o objs/src/app/srs_app_rtc_api.o objs/src/main/srs_main_server.o 
	$(LINK) -o objs/srs objs/src/core/srs_core.o objs/src/core/srs_core_version4.o objs/src/core/srs_core_autofree.o objs/src/core/srs_core_performance.o objs/src/core/srs_core_time.o objs/src/kernel/srs_kernel_error.o objs/src/kernel/srs_kernel_log.o objs/src/kernel/srs_kernel_buffer.o objs/src/kernel/srs_kernel_utility.o objs/src/kernel/srs_kernel_flv.o objs/src/kernel/srs_kernel_codec.o objs/src/kernel/srs_kernel_io.o objs/src/kernel/srs_kernel_consts.o objs/src/kernel/srs_kernel_aac.o objs/src/kernel/srs_kernel_mp3.o objs/src/kernel/srs_kernel_ts.o objs/src/kernel/srs_kernel_stream.o objs/src/kernel/srs_kernel_balance.o objs/src/kernel/srs_kernel_mp4.o objs/src/kernel/srs_kernel_file.o objs/src/kernel/srs_kernel_kbps.o objs/src/kernel/srs_kernel_rtc_rtp.o objs/src/kernel/srs_kernel_rtc_rtcp.o objs/src/protocol/srs_protocol_amf0.o objs/src/protocol/srs_protocol_io.o objs/src/protocol/srs_rtmp_stack.o objs/src/protocol/srs_rtmp_handshake.o objs/src/protocol/srs_protocol_utility.o objs/src/protocol/srs_rtmp_msg_array.o objs/src/protocol/srs_protocol_stream.o objs/src/protocol/srs_raw_avc.o objs/src/protocol/srs_rtsp_stack.o objs/src/protocol/srs_http_stack.o objs/src/protocol/srs_protocol_kbps.o objs/src/protocol/srs_protocol_json.o objs/src/protocol/srs_protocol_format.o objs/src/protocol/srs_service_log.o objs/src/protocol/srs_service_st.o objs/src/protocol/srs_service_http_client.o objs/src/protocol/srs_service_http_conn.o objs/src/protocol/srs_service_rtmp_conn.o objs/src/protocol/srs_service_utility.o objs/src/protocol/srs_service_conn.o objs/src/protocol/srs_rtc_stun_stack.o objs/src/app/srs_app_server.o objs/src/app/srs_app_conn.o objs/src/app/srs_app_rtmp_conn.o objs/src/app/srs_app_source.o objs/src/app/srs_app_refer.o objs/src/app/srs_app_hls.o objs/src/app/srs_app_forward.o objs/src/app/srs_app_encoder.o objs/src/app/srs_app_http_stream.o objs/src/app/srs_app_bandwidth.o objs/src/app/srs_app_st.o objs/src/app/srs_app_log.o objs/src/app/srs_app_config.o objs/src/app/srs_app_pithy_print.o objs/src/app/srs_app_reload.o objs/src/app/srs_app_http_api.o objs/src/app/srs_app_http_conn.o objs/src/app/srs_app_http_hooks.o objs/src/app/srs_app_ingest.o objs/src/app/srs_app_ffmpeg.o objs/src/app/srs_app_utility.o objs/src/app/srs_app_edge.o objs/src/app/srs_app_heartbeat.o objs/src/app/srs_app_empty.o objs/src/app/srs_app_http_client.o objs/src/app/srs_app_http_static.o objs/src/app/srs_app_recv_thread.o objs/src/app/srs_app_security.o objs/src/app/srs_app_statistic.o objs/src/app/srs_app_hds.o objs/src/app/srs_app_mpegts_udp.o objs/src/app/srs_app_listener.o objs/src/app/srs_app_async_call.o objs/src/app/srs_app_caster_flv.o objs/src/app/srs_app_latest_version.o objs/src/app/srs_app_uuid.o objs/src/app/srs_app_process.o objs/src/app/srs_app_ng_exec.o objs/src/app/srs_app_hourglass.o objs/src/app/srs_app_dash.o objs/src/app/srs_app_fragment.o objs/src/app/srs_app_dvr.o objs/src/app/srs_app_coworkers.o objs/src/app/srs_app_hybrid.o objs/src/app/srs_app_threads.o objs/src/app/srs_app_rtc_conn.o objs/src/app/srs_app_rtc_dtls.o objs/src/app/srs_app_rtc_sdp.o objs/src/app/srs_app_rtc_queue.o objs/src/app/srs_app_rtc_server.o objs/src/app/srs_app_rtc_source.o objs/src/app/srs_app_rtc_api.o objs/src/main/srs_main_server.o objs/st/libst.a objs/openssl/lib/libssl.a objs/openssl/lib/libcrypto.a objs/srtp2/lib/libsrtp2.a -ldl -lpthread

# build objs/srs_hls_ingester
srs_hls_ingester: objs/srs_hls_ingester

objs/srs_hls_ingester: objs/src/core/srs_core.o objs/src/core/srs_core_version4.o objs/src/core/srs_core_autofree.o objs/src/core/srs_core_performance.o objs/src/core/srs_core_time.o objs/src/kernel/srs_kernel_error.o objs/src/kernel/srs_kernel_log.o objs/src/kernel/srs_kernel_buffer.o objs/src/kernel/srs_kernel_utility.o objs/src/kernel/srs_kernel_flv.o objs/src/kernel/srs_kernel_codec.o objs/src/kernel/srs_kernel_io.o objs/src/kernel/srs_kernel_consts.o objs/src/kernel/srs_kernel_aac.o objs/src/kernel/srs_kernel_mp3.o objs/src/kernel/srs_kernel_ts.o objs/src/kernel/srs_kernel_stream.o objs/src/kernel/srs_kernel_balance.o objs/src/kernel/srs_kernel_mp4.o objs/src/kernel/srs_kernel_file.o objs/src/kernel/srs_kernel_kbps.o objs/src/kernel/srs_kernel_rtc_rtp.o objs/src/kernel/srs_kernel_rtc_rtcp.o objs/src/protocol/srs_protocol_amf0.o objs/src/protocol/srs_protocol_io.o objs/src/protocol/srs_rtmp_stack.o objs/src/protocol/srs_rtmp_handshake.o objs/src/protocol/srs_protocol_utility.o objs/src/protocol/srs_rtmp_msg_array.o objs/src/protocol/srs_protocol_stream.o objs/src/protocol/srs_raw_avc.o objs/src/protocol/srs_rtsp_stack.o objs/src/protocol/srs_http_stack.o objs/src/protocol/srs_protocol_kbps.o objs/src/protocol/srs_protocol_json.o objs/src/protocol/srs_protocol_format.o objs/src/protocol/srs_service_log.o objs/src/protocol/srs_service_st.o objs/src/protocol/srs_service_http_client.o objs/src/protocol/srs_service_http_conn.o objs/src/protocol/srs_service_rtmp_conn.o objs/src/protocol/srs_service_utility.o objs/src/protocol/srs_service_conn.o objs/src/protocol/srs_rtc_stun_stack.o objs/src/main/srs_main_ingest_hls.o 
	$(LINK) -o objs/srs_hls_ingester objs/src/core/srs_core.o objs/src/core/srs_core_version4.o objs/src/core/srs_core_autofree.o objs/src/core/srs_core_performance.o objs/src/core/srs_core_time.o objs/src/kernel/srs_kernel_error.o objs/src/kernel/srs_kernel_log.o objs/src/kernel/srs_kernel_buffer.o objs/src/kernel/srs_kernel_utility.o objs/src/kernel/srs_kernel_flv.o objs/src/kernel/srs_kernel_codec.o objs/src/kernel/srs_kernel_io.o objs/src/kernel/srs_kernel_consts.o objs/src/kernel/srs_kernel_aac.o objs/src/kernel/srs_kernel_mp3.o objs/src/kernel/srs_kernel_ts.o objs/src/kernel/srs_kernel_stream.o objs/src/kernel/srs_kernel_balance.o objs/src/kernel/srs_kernel_mp4.o objs/src/kernel/srs_kernel_file.o objs/src/kernel/srs_kernel_kbps.o objs/src/kernel/srs_kernel_rtc_rtp.o objs/src/kernel/srs_kernel_rtc_rtcp.o objs/src/protocol/srs_protocol_amf0.o objs/src/protocol/srs_protocol_io.o objs/src/protocol/srs_rtmp_stack.o objs/src/protocol/srs_rtmp_handshake.o objs/src/protocol/srs_protocol_utility.o objs/src/protocol/srs_rtmp_msg_array.o objs/src/protocol/srs_protocol_stream.o objs/src/protocol/srs_raw_avc.o objs/src/protocol/srs_rtsp_stack.o objs/src/protocol/srs_http_stack.o objs/src/protocol/srs_protocol_kbps.o objs/src/protocol/srs_protocol_json.o objs/src/protocol/srs_protocol_format.o objs/src/protocol/srs_service_log.o objs/src/protocol/srs_service_st.o objs/src/protocol/srs_service_http_client.o objs/src/protocol/srs_service_http_conn.o objs/src/protocol/srs_service_rtmp_conn.o objs/src/protocol/srs_service_utility.o objs/src/protocol/srs_service_conn.o objs/src/protocol/srs_rtc_stun_stack.o objs/src/main/srs_main_ingest_hls.o objs/st/libst.a objs/openssl/lib/libssl.a objs/openssl/lib/libcrypto.a objs/srtp2/lib/libsrtp2.a -ldl -lpthread

# build objs/srs_mp4_parser
srs_mp4_parser: objs/srs_mp4_parser

objs/srs_mp4_parser: objs/src/core/srs_core.o objs/src/core/srs_core_version4.o objs/src/core/srs_core_autofree.o objs/src/core/srs_core_performance.o objs/src/core/srs_core_time.o objs/src/kernel/srs_kernel_error.o objs/src/kernel/srs_kernel_log.o objs/src/kernel/srs_kernel_buffer.o objs/src/kernel/srs_kernel_utility.o objs/src/kernel/srs_kernel_flv.o objs/src/kernel/srs_kernel_codec.o objs/src/kernel/srs_kernel_io.o objs/src/kernel/srs_kernel_consts.o objs/src/kernel/srs_kernel_aac.o objs/src/kernel/srs_kernel_mp3.o objs/src/kernel/srs_kernel_ts.o objs/src/kernel/srs_kernel_stream.o objs/src/kernel/srs_kernel_balance.o objs/src/kernel/srs_kernel_mp4.o objs/src/kernel/srs_kernel_file.o objs/src/kernel/srs_kernel_kbps.o objs/src/kernel/srs_kernel_rtc_rtp.o objs/src/kernel/srs_kernel_rtc_rtcp.o objs/src/protocol/srs_protocol_amf0.o objs/src/protocol/srs_protocol_io.o objs/src/protocol/srs_rtmp_stack.o objs/src/protocol/srs_rtmp_handshake.o objs/src/protocol/srs_protocol_utility.o objs/src/protocol/srs_rtmp_msg_array.o objs/src/protocol/srs_protocol_stream.o objs/src/protocol/srs_raw_avc.o objs/src/protocol/srs_rtsp_stack.o objs/src/protocol/srs_http_stack.o objs/src/protocol/srs_protocol_kbps.o objs/src/protocol/srs_protocol_json.o objs/src/protocol/srs_protocol_format.o objs/src/protocol/srs_service_log.o objs/src/protocol/srs_service_st.o objs/src/protocol/srs_service_http_client.o objs/src/protocol/srs_service_http_conn.o objs/src/protocol/srs_service_rtmp_conn.o objs/src/protocol/srs_service_utility.o objs/src/protocol/srs_service_conn.o objs/src/protocol/srs_rtc_stun_stack.o objs/src/main/srs_main_mp4_parser.o 
	$(LINK) -o objs/srs_mp4_parser objs/src/core/srs_core.o objs/src/core/srs_core_version4.o objs/src/core/srs_core_autofree.o objs/src/core/srs_core_performance.o objs/src/core/srs_core_time.o objs/src/kernel/srs_kernel_error.o objs/src/kernel/srs_kernel_log.o objs/src/kernel/srs_kernel_buffer.o objs/src/kernel/srs_kernel_utility.o objs/src/kernel/srs_kernel_flv.o objs/src/kernel/srs_kernel_codec.o objs/src/kernel/srs_kernel_io.o objs/src/kernel/srs_kernel_consts.o objs/src/kernel/srs_kernel_aac.o objs/src/kernel/srs_kernel_mp3.o objs/src/kernel/srs_kernel_ts.o objs/src/kernel/srs_kernel_stream.o objs/src/kernel/srs_kernel_balance.o objs/src/kernel/srs_kernel_mp4.o objs/src/kernel/srs_kernel_file.o objs/src/kernel/srs_kernel_kbps.o objs/src/kernel/srs_kernel_rtc_rtp.o objs/src/kernel/srs_kernel_rtc_rtcp.o objs/src/protocol/srs_protocol_amf0.o objs/src/protocol/srs_protocol_io.o objs/src/protocol/srs_rtmp_stack.o objs/src/protocol/srs_rtmp_handshake.o objs/src/protocol/srs_protocol_utility.o objs/src/protocol/srs_rtmp_msg_array.o objs/src/protocol/srs_protocol_stream.o objs/src/protocol/srs_raw_avc.o objs/src/protocol/srs_rtsp_stack.o objs/src/protocol/srs_http_stack.o objs/src/protocol/srs_protocol_kbps.o objs/src/protocol/srs_protocol_json.o objs/src/protocol/srs_protocol_format.o objs/src/protocol/srs_service_log.o objs/src/protocol/srs_service_st.o objs/src/protocol/srs_service_http_client.o objs/src/protocol/srs_service_http_conn.o objs/src/protocol/srs_service_rtmp_conn.o objs/src/protocol/srs_service_utility.o objs/src/protocol/srs_service_conn.o objs/src/protocol/srs_rtc_stun_stack.o objs/src/main/srs_main_mp4_parser.o objs/st/libst.a objs/openssl/lib/libssl.a objs/openssl/lib/libcrypto.a objs/srtp2/lib/libsrtp2.a -ldl -lpthread

