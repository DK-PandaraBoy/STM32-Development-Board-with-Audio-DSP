#include "arm_math.h"


void demo_fft(float32_t *input, float32_t *output, uint32_t fftSize) {
arm_cfft_radix4_instance_f32 S;
arm_cfft_radix4_init_f32(&S, fftSize, 0, 1);
arm_cfft_radix4_f32(&S, input);
arm_cmplx_mag_f32(input, output, fftSize);
}
