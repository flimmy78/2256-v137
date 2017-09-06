#ifndef __VIDEO_ENCODER_H__
#define __VIDEO_ENCODER_H__

#include "avi_encoder_app.h"

void video_encode_entrance(void);
void video_encode_exit(void);
CODEC_START_STATUS video_encode_preview_start(VIDEO_ARGUMENT arg);
CODEC_START_STATUS video_encode_preview_stop(void);
CODEC_START_STATUS video_encode_start(MEDIA_SOURCE src);
CODEC_START_STATUS video_encode_stop(void);
CODEC_START_STATUS video_encode_Info(VIDEO_INFO *info);
VIDEO_CODEC_STATUS video_encode_status(void);
CODEC_START_STATUS video_encode_auto_switch_csi_frame(void);
CODEC_START_STATUS video_encode_auto_switch_csi_fifo_end(INT8U flag);
CODEC_START_STATUS video_encode_auto_switch_csi_frame_end(INT8U flag);
CODEC_START_STATUS video_encode_set_zoom_scaler(FP32 zoom_ratio);
CODEC_START_STATUS video_encode_pause(void);
CODEC_START_STATUS video_encode_resume(void);
CODEC_START_STATUS video_encode_capture_picture(MEDIA_SOURCE src);
//CODEC_START_STATUS video_encode_fast_switch_stop_and_start(MEDIA_SOURCE src);
#endif