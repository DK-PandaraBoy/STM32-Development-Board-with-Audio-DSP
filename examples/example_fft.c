#include "arm_math.h"


void run_fft_demo(void) {
float32_t input[256];
float32_t output[256];
demo_fft(input, output, 256);
}
