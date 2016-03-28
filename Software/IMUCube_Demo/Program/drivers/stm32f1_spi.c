/*=====================================================================================================*/
/*=====================================================================================================*/
#include "stm32f1_system.h"
#include "stm32f1_spi.h"
/*=====================================================================================================*/
/*=====================================================================================================*
**函數 : SPI_RW
**功能 : Read\Write Data
**輸入 : SPIx, writeData
**輸出 : readData
**使用 : readData = SPI_RW(SPIx, 0xFFFF);
**=====================================================================================================*/
/*=====================================================================================================*/
uint16_t SPI_RW( SPI_TypeDef *SPIx, uint16_t writeData )
{
  while((SPIx->SR & SPI_I2S_FLAG_TXE) == (uint16_t)RESET);
  SPIx->DR = writeData;
  while((SPIx->SR & SPI_I2S_FLAG_RXNE) == (uint16_t)RESET);

  return SPIx->DR;
}
/*=====================================================================================================*/
/*=====================================================================================================*/