/**
  ******************************************************************************
  * @file    DMA2D/DMA2D_MemToMemWithBlending/Inc/main.h
  * @author  MCD Application Team
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32h750b_discovery.h"
#include "stm32h750b_discovery_lcd.h"
#include "stm32h750b_discovery_sdram.h"
#include "stm32_lcd.h"

#define LAYER_SIZE_X      240
#define LAYER_SIZE_Y      130
#define LAYER_BYTE_PER_PIXEL  2

#define LCD_OK                 0x00U
#define LCD_ERROR              0x01U

#define LCD_FRAME_BUFFER  0xD0000000

#define LCD_RES_X  480
#define LCD_RES_Y  272

#define ARGB8888_BYTE_PER_PIXEL  4
#define RGB565_BYTE_PER_PIXEL    2

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
