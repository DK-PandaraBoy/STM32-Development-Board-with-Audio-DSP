#include "main.h"
#include "cmsis_os.h"


int main(void) {
HAL_Init();
SystemClock_Config();


Audio_Init();


osKernelInitialize();
MX_FREERTOS_Init();
osKernelStart();


while (1) {
}
}
