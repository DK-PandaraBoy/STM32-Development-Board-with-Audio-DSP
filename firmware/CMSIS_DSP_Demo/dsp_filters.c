#include "arm_math.h"


void demo_lowpass(float32_t *input, float32_t *output, uint32_t blockSize) {
arm_fir_instance_f32 S;
float32_t coeffs[32];
float32_t state[32 + 256];
arm_fir_init_f32(&S, 32, coeffs, state, blockSize);
arm_fir_f32(&S, input, output, blockSize);
}
