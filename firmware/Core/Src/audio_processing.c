#include "audio_processing.h"


static arm_biquad_casd_df1_inst_f32 S;
static float32_t biquadState[4*1];


void Audio_Init(void) {
float32_t biquadCoeffs[5] = {0.1, 0.1, 0.1, -0.2, 0.3};
arm_biquad_cascade_df1_init_f32(&S, 1, biquadCoeffs, biquadState);
}


void Audio_ProcessBlock(int16_t *input, int16_t *output, uint32_t blockSize) {
float32_t inF[AUDIO_BUFFER_SIZE];
float32_t outF[AUDIO_BUFFER_SIZE];
for (uint32_t i = 0; i < blockSize; i++) {
inF[i] = (float32_t)input[i] / 32768.0f;
}
arm_biquad_cascade_df1_f32(&S, inF, outF, blockSize);
for (uint32_t i = 0; i < blockSize; i++) {
output[i] = (int16_t)(outF[i] * 32768.0f);
}
}
