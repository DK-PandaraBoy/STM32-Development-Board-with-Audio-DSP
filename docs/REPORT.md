# Report: STM32 Audio DSP Development Board


## Overview
This project demonstrates the design and validation of a custom STM32-based development board for audio DSP. Key goals were professional-grade audio I/O, USB connectivity, and efficient real-time DSP using FreeRTOS and CMSIS-DSP.


## Hardware Highlights
- STM32F411 MCU
- USB audio interface
- Professional audio I/O
- 4-layer PCB with analog/digital separation


## Firmware Highlights
- Real-time processing under FreeRTOS
- Audio task with block processing
- CMSIS-DSP for filtering and FFT

## Example DSP Functions
- **Equalization filter (FIR)** for tone shaping.
- **FFT analysis** to visualize frequency content.
- **Reverb effect** to demonstrate block-based DSP.


## Example Results
- Low-pass FIR filter reduces noise floor by ~20 dB in test audio.
- FFT demo shows spectral resolution for 1 kHz sine input.

## Results Summary
- Input/output FFT analysis shows significant filtering action.
- FIR-based EQ achieves >40 dB stopband attenuation.
- Measured audio latency vs. block size trade-off:


| Block Size | Latency (ms) | CPU Usage (%) |
|------------|--------------|----------------|
| 64 | 1.45 | 68 |
| 128 | 2.9 | 45 |
| 256 | 5.8 | 28 |


## Figures
![Board Render](figures/board_render.png)
![Audio Chain](figures/audio_chain.png)
![RTOS Tasks](figures/rt_tasks.png)

### FFT comparison
![FFT Input vs Output](figures/fft_input_vs_output.png)


### FIR Filter Response
![Filter Response](figures/filter_response.png)


### Latency vs Block Size
![Latency vs Block Size](figures/latency_vs_blocksize.png)


## How to reproduce
1. Open project in STM32CubeIDE.
2. Build firmware and flash board.
3. Play `data/sample_input.wav` into the board.
4. Record output and save as `data/sample_output.wav`.
5. Run `scripts/analyze_fft.m` to generate figures.
