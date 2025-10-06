# STM32-Development-Board-with-Audio-DSP
This repository contains the design and firmware for a custom STM32-based audio DSP board. It includes:


- 4-layer PCB (Altium) with isolated analog and digital domains.
- Professional audio I/O circuitry (simulated in LTSpice).
- USB connectivity.
- Firmware in STM32CubeIDE with FreeRTOS.
- CMSIS-DSP accelerated audio processing (FFT, filters, EQ).


## Quickstart
1. Open `firmware/STM32CubeIDE` in STM32CubeIDE.
2. Build and flash to target STM32 MCU.
3. Connect USB audio interface and line in/out.
4. Run examples from `examples/` to test.


## Hardware
- MCU: STM32F411 (or compatible)
- Audio codec: [placeholder, replace with used codec]
- Power: USB or external 5V

## Repository Structure
stm32-audio-dsp-board/
├── README.md
├── LICENSE
├── .gitignore
├── firmware/
│ ├── Core/
│ │ ├── Inc/
│ │ │ ├── main.h
│ │ │ ├── audio_processing.h
│ │ │ └── freertos.h
│ │ └── Src/
│ │ ├── main.c
│ │ ├── audio_processing.c
│ │ └── freertos.c
│ ├── CMSIS_DSP_Demo/
│ │ ├── dsp_filters.c
│ │ └── dsp_fft.c
│ ├── FreeRTOSConfig.h
│ └── STM32CubeIDE/
│ └── project_files/... (generated project files)
├── hardware/
│ ├── schematics/
│ │ ├── stm32_audio_board_sch.pdf
│ │ └── stm32_audio_board_sch.Altium
│ ├── pcb/
│ │ ├── stm32_audio_board_pcb.pdf
│ │ └── stm32_audio_board_pcb.Altium
│ └── simulation/
│ ├── input_stage.asc
│ ├── output_stage.asc
│ └── sim_results.png
├── docs/
│ ├── REPORT.md
│ └── figures/
│ ├── board_render.png
│ ├── audio_chain.png
│ └── rt_tasks.png
└── examples/
├── example_eq.c
└── example_fft.c


## License
MIT
