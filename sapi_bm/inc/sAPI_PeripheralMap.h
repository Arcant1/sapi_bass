/* Copyright 2015, Eric Pernia.
 * Copyright 2016, Ian Olivieri.
 * Copyright 2016, Eric Pernia.
 * All rights reserved.
 *
 * This file is part sAPI library for microcontrollers.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/* Date: 2015-09-23 */

#ifndef _SAPI_PERIPHERALMAP_H_
#define _SAPI_PERIPHERALMAP_H_
#define CLRLEDS GPIO0
#define CLRGND GPIO8
#define CLKLEDS GPIO1
#define CLKGND GPIO2
#define DATALEDS GPIO5
#define DATAGND GPIO6
/*==================[inclusions]=============================================*/

#include "chip.h"

/*==================[cplusplus]==============================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/

/*==================[typedef]================================================*/

/* ----- Begin Pin Config Structs NXP LPC4337 ----- */

typedef struct{
   int8_t port;
   int8_t pin;
} pinConfigLpc4337_t;

/* ------ End Pin Config Structs NXP LPC4337 ------ */


/* ------- Begin EDU-CIAA-NXP Peripheral Map ------ */

/* Defined for sAPI_DigitalIO.h */
typedef enum{
   /* EDU-CIAA-NXP */
   IO0,  IO1,  IO2,  IO3,  IO4,  IO5,  IO6,  IO7,  IO8,  IO9,
   IO10, GPIO8, IO12, GPIO5, IO14, GPIO1, IO16, IO17, IO18, IO19,
   IO20, IO21, IO22, IO23, IO24, IO25, IO26, IO27, IO28, GPIO6,
   IO30, GPIO2, GPIO0, IO33, IO34, IO35,
  /* 36     37     38     39 */
   TEC1,  TEC2,  TEC3,  TEC4,
  /* 40     41     42     43     44     45 */
   LED1,  LED2,  LED3,  LEDR,  LEDG,  LEDB,

   /* CIAA-NXP */
 /* 46     47     48     49     50     51     52     53 */
   DI0,   DI1,   DI2,   DI3,   DI4,   DI5,   DI6,   DI7,
 /* 54     55     56     57     58     59     60     61 */
   DO0,   DO1,   DO2,   DO3,   DO4,   DO5,   DO6,   DO7
} DigitalIOMap_t;

/* Defined for sAPI_AnalogIO.h */
typedef enum{
/* 62         63   64   65  66 */
   AI3 = 62, AI2, AI1, ADC0, AO
/*  46        47   48  49 */
// AI2 = 46, AI1, AI0, AO
} AnalogIOMap_t;

/* Defined for sAPI_Uart.h */
typedef enum{
   UART_USB, UART_232, UART_485
} UartMap_t;

/*Defined for sAPI_Timer.h*/
//NOTE: if servo is enable (servoConfig used) the only available timer to use is TIMER0
typedef enum{
   TIMER0, TIMER1, TIMER2, TIMER3
} TimerMap_t;
typedef enum{
   TIMERCOMPAREMATCH0, TIMERCOMPAREMATCH1, TIMERCOMPAREMATCH2, TIMERCOMPAREMATCH3
} TimerCompareMatch_t;

/*Defined for sAPI_Sct.h*/
// NOTE: CTOUT11 has no SCT mode associated, so it can't be used!
// NOTE: if pwm is enable (pwmConfig used) there will be no sct channels available
typedef enum{
   CTOUT0, CTOUT1, CTOUT2, CTOUT3, CTOUT4, CTOUT5, CTOUT6, CTOUT7, CTOUT8,
   CTOUT9, CTOUT10, CTOUT11, CTOUT12, CTOUT13
} SctMap_t;

/*Defined for sAPI_Pwm.h*/
typedef enum{
   PWM0, PWM1, PWM2, PWM3, PWM4, PWM5, PWM6, PWM7, PWM8, PWM9, PWM10
} PwmMap_t;

/*Defined for sAPI_Servo.h*/
typedef enum{
   SERVO0, SERVO1, SERVO2, SERVO3, SERVO4, SERVO5, SERVO6, SERVO7, SERVO8
} ServoMap_t;

/*Defined for sAPI_I2c.h*/
/* Comment because already defined in "i2c_18xx_43xx.h"*/
/*
typedef enum{
   I2C0 // TODO: Add support for I2C1
} I2cMap_t;
*/

/* ------- End EDU-CIAA-NXP Peripheral Map -------- */

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/*==================[cplusplus]==============================================*/

#ifdef __cplusplus
}
#endif

/*==================[end of file]============================================*/
#endif /* #ifndef _SAPI_PERIPHERALMAP_H_ */
