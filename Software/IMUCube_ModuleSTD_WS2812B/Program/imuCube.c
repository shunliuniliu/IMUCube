/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f1_system.h"
#include "modules\module_ws2812b.h"

#include "imuCube.h"
/*====================================================================================================*/
/*====================================================================================================*/
void IMUCube_Init( void )
{
  SystemInit();
  HAL_InitTick();

  WS2812B_Config();
}
/*====================================================================================================*/
/*====================================================================================================*/
void IMUCube_Loop( void )
{
  WS2812B_DEMO();
}
/*====================================================================================================*/
/*====================================================================================================*/