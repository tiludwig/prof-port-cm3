/*
 * stm32f10x_DWT.h
 *
 *  Created on: 14.03.2019
 *      Author: Tim
 */

#ifndef STM32F10X_DWT_H_
#define STM32F10X_DWT_H_

#include "stm32f10x.h"

typedef struct
{
	__IO uint32_t CTRL;
	__IO uint32_t CYCCNT;
	__IO uint32_t CPICNT;
} DWT_TypeDef;

#define DWT ((DWT_TypeDef*)0xE0001000)

#endif /* STM32F10X_DWT_H_ */
