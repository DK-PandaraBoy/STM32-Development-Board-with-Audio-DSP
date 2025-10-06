#include "dsp_filters.h"
#include "arm_math.h"


#define BLOCK_SIZE 128
#define NUM_TAPS 64


float32_t inputBuffer[BLOCK_SIZE];
float32_t outputBuffer[BLOCK_SIZE];
float32_t firState[BLOCK_SIZE + NUM_TAPS - 1];
float32_t firCoeffs[NUM_TAPS] = { /* band-pass filter coeffs */ };


arm_fir_instance_f32 S;


void eq_filter_demo(void) {
arm_fir_init_f32(&S, NUM_TAPS, firCoeffs, firState, BLOCK_SIZE);


while (1) {
getAudioBlock(inputBuffer, BLOCK_SIZE);
arm_fir_f32(&S, inputBuffer, outputBuffer, BLOCK_SIZE);
sendAudioBlock(outputBuffer, BLOCK_SIZE);
}
}
