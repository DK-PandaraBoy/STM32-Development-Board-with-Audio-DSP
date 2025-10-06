#include "freertos.h"
#include "cmsis_os.h"
#include "audio_processing.h"


osThreadId_t audioTaskHandle;


void StartAudioTask(void *argument) {
int16_t inputBuf[AUDIO_BUFFER_SIZE];
int16_t outputBuf[AUDIO_BUFFER_SIZE];
while (1) {
// Fill inputBuf with audio samples from codec
Audio_ProcessBlock(inputBuf, outputBuf, AUDIO_BUFFER_SIZE);
// Send outputBuf to DAC/codec
osDelay(1);
}
}


void MX_FREERTOS_Init(void) {
const osThreadAttr_t audioTask_attributes = {
.name = "audioTask",
.stack_size = 512 * 4,
.priority = (osPriority_t) osPriorityNormal,
};
audioTaskHandle = osThreadNew(StartAudioTask, NULL, &audioTask_attributes);
}
