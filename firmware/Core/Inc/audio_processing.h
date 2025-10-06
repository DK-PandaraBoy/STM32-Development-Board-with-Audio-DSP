#ifndef __AUDIO_PROCESSING_H__
#define __AUDIO_PROCESSING_H__


#include <stdint.h>
#include "arm_math.h"


#define AUDIO_BUFFER_SIZE 256


void Audio_Init(void);
void Audio_ProcessBlock(int16_t *input, int16_t *output, uint32_t blockSize);


#endif
