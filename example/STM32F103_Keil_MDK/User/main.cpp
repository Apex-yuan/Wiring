/**
  ******************************************************************************
  * @file    bsp_u8g2.c 
  * @author  Apex yuan
  * @version V1.0.0
  * @date    2019-10-19
  * @brief   Main program body
  ******************************************************************************
  * @attention
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "bsp.h"
//#include "bsp_u8g2.h"
#include <stdlib.h>
//#include <iostream>
//#include <string>
#include "WString.h"
/** @addtogroup Template_Project
  * @{
  */ 

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
String aa,bb;

/* Private function prototypes -----------------------------------------------*/
/* button setup for Arduboy Production */


/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  bsp_init();
  char *ss = "sdfsdf";
  aa = "sdfsdf";
  //String aa = "sds";
  bb = aa + "sss";
  //printf("%s", aa);
  //std::cout << bb;
  /* Infinite loop */
  while (1)
  {
    
  }
}


#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
