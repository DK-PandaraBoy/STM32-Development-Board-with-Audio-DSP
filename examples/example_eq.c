#include "audio_processing.h"


void run_eq_demo(void) {
int16_t input[AUDIO_BUFFER_SIZE];
int16_t output[AUDIO_BUFFER_SIZE];
Audio_ProcessBlock(input, output, AUDIO_BUFFER_SIZE);
}
