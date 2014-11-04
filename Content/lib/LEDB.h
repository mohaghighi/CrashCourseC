/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LEDB.h
**     Project     : FRDM-KL25Z_CrashCourseC
**     Processor   : MKL25Z128VLK4
**     Component   : LED
**     Version     : Component 01.062, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-11-04, 08:43, # CodeGen: 1
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LEDB
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Disabled
**     Contents    :
**         Init       - void LEDB_Init(void);
**         Deinit     - void LEDB_Deinit(void);
**         On         - void LEDB_On(void);
**         Off        - void LEDB_Off(void);
**         Neg        - void LEDB_Neg(void);
**         Get        - byte LEDB_Get(void);
**         Put        - void LEDB_Put(byte val);
**         SetRatio16 - void LEDB_SetRatio16(word ratio);
**
**     License   : Open Source (LGPL)
**     Copyright : Erich Styger, 2013, all rights reserved.
**     Web       : www.mcuoneclipse.com
**     This an open source software implementing a driver using Processor Expert.
**     This is a free software and is opened for education, research and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file LEDB.h
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LEDB_module LEDB module documentation
**  @{
*/         

#ifndef __LEDB_H
#define __LEDB_H

/* MODULE LEDB. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "LEDpin3.h"

#include "Cpu.h"

#define LEDB_ClrVal()    LEDpin3_ClrVal() /* put the pin on low level */
#define LEDB_SetVal()    LEDpin3_SetVal() /* put the pin on high level */
#define LEDB_SetInput()  LEDpin3_SetInput() /* use the pin as input pin */
#define LEDB_SetOutput() LEDpin3_SetOutput() /* use the pin as output pin */

#define LEDB_PARSE_COMMAND_ENABLED  0 /* set to 1 if method ParseCommand() is present, 0 otherwise */


#define LEDB_On() LEDpin3_ClrVal()
/*
** ===================================================================
**     Method      :  LEDB_On (component LED)
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDB_Off() LEDpin3_SetVal()
/*
** ===================================================================
**     Method      :  LEDB_Off (component LED)
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDB_Neg() LEDpin3_NegVal()
/*
** ===================================================================
**     Method      :  LEDB_Neg (component LED)
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDB_Get() (!(LEDpin3_GetVal()))
/*
** ===================================================================
**     Method      :  LEDB_Get (component LED)
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/

#define LEDB_Init() LEDB_Off()
/*
** ===================================================================
**     Method      :  LEDB_Init (component LED)
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDB_Put(val)  ((val) ? LEDB_On() : LEDB_Off())
/*
** ===================================================================
**     Method      :  LEDB_Put (component LED)
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/

void LEDB_Deinit(void);
/*
** ===================================================================
**     Method      :  LEDB_Deinit (component LED)
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDB_SetRatio16(word ratio);
/*
** ===================================================================
**     Method      :  LEDB_SetRatio16 (component LED)
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/

/* END LEDB. */

#endif
/* ifndef __LEDB_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.10]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
