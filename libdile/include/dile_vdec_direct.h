#pragma once
#include <stddef.h>

int DILE_VDEC_DIRECT_Open(unsigned int fourcc, int width, int height, int tridType, int videoIndex);

int DILE_VDEC_DIRECT_Play(const void *data, size_t size);

int DILE_VDEC_DIRECT_Stop();

void DILE_VDEC_DIRECT_Close();