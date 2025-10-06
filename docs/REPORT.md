# Report: STM32 Audio DSP Development Board


## Overview
This project developed a 4-layer STM32 board for real-time audio DSP with FreeRTOS and CMSIS-DSP.


## Hardware Highlights
- STM32F411 MCU
- USB audio interface
- Professional audio I/O
- 4-layer PCB with analog/digital separation


## Firmware Highlights
- Real-time processing under FreeRTOS
- Audio task with block processing
- CMSIS-DSP for filtering and FFT


## Example Results
- Low-pass FIR filter reduces noise floor by ~20 dB in test audio.
- FFT demo shows spectral resolution for 1 kHz sine input.


## Figures
![Board Render](figures/board_render.png)
![Audio Chain](figures/audio_chain.png)
![RTOS Tasks](figures/rt_tasks.png)
