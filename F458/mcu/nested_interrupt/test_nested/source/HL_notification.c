/** @file HL_notification.c 
*   @brief User Notification Definition File
*   @date 07-July-2017
*   @version 04.07.00
*
*   This file  defines  empty  notification  routines to avoid
*   linker errors, Driver expects user to define the notification. 
*   The user needs to either remove this file and use their custom 
*   notification function or place their code sequence in this file 
*   between the provided USER CODE BEGIN and USER CODE END.
*
*/

/* 
* Copyright (C) 2009-2016 Texas Instruments Incorporated - www.ti.com  
* 
* 
*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions 
*  are met:
*
*    Redistributions of source code must retain the above copyright 
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the 
*    documentation and/or other materials provided with the   
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/


/* Include Files */

#include "HL_esm.h"
#include "HL_gio.h"
#include "HL_rti.h"
#include "HL_epc.h"
#include "HL_sys_dma.h"
#include "HL_reg_het.h"

/* USER CODE BEGIN (0) */
/* USER CODE END */
#pragma WEAK(esmGroup1Notification)
void esmGroup1Notification(esmBASE_t *esm, uint32 channel)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
/* USER CODE BEGIN (1) */
/* USER CODE END */
}

/* USER CODE BEGIN (2) */
/* USER CODE END */
#pragma WEAK(esmGroup2Notification)
void esmGroup2Notification(esmBASE_t *esm, uint32 channel)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
/* USER CODE BEGIN (3) */
/* USER CODE END */
}

/* USER CODE BEGIN (4) */
/* USER CODE END */
#pragma WEAK(esmGroup3Notification)
void esmGroup3Notification(esmBASE_t *esm, uint32 channel)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
/* USER CODE BEGIN (5) */
/* USER CODE END */
    for(;;)
    { 
    }/* Wait */  
/* USER CODE BEGIN (6) */
/* USER CODE END */
}

/* USER CODE BEGIN (7) */
/* USER CODE END */

#pragma WEAK(dmaGroupANotification)
void dmaGroupANotification(dmaInterrupt_t inttype, uint32 channel)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
/* USER CODE BEGIN (8) */
/* USER CODE END */
}

/* USER CODE BEGIN (9) */
/* USER CODE END */

/* USER CODE BEGIN (10) */
/* USER CODE END */

/* USER CODE BEGIN (11) */
/* USER CODE END */
#pragma WEAK(rtiNotification)
void rtiNotification(rtiBASE_t *rtiREG, uint32 notification)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
/* USER CODE BEGIN (12) */
    switch(notification)
        {
        case rtiNOTIFICATION_COMPARE0:
        {
            uint32 u32Period  = rtiGetPeriod(rtiREG1, rtiCOMPARE0);
            uint32 u32CurrCmp = rtiREG1->CMP[rtiCOMPARE0].COMPx;

            gioSetBit(hetPORT1, 31ull, 1ull); /* Switch on LED D4 */

            /* Wait for half the period proir to switch off the LED */
            while(rtiREG1->CNT[0].FRCx < (u32CurrCmp - (u32Period >> 1)));

            gioSetBit(hetPORT1, 31ull, 0ull); /* Switch off LED D4 */
        }
        break;
        case rtiNOTIFICATION_COMPARE1:
        {
            uint32 u32Period  = rtiGetPeriod(rtiREG1, rtiCOMPARE1);
            uint32 u32CurrCmp = rtiREG1->CMP[rtiCOMPARE1].COMPx;

            gioSetBit(hetPORT1, 0ull, 1ull); /* Switch on LED D5 */

            /* Wait for half the period proir to switch off the LED */
            while(rtiREG1->CNT[0].FRCx < (u32CurrCmp - (u32Period >> 1)));

            gioSetBit(hetPORT1, 0ull, 0ull); /* Switch off LED D5 */
        }
        break;
        default:
            break;
        }
/* USER CODE END */
}

/* USER CODE BEGIN (13) */
/* USER CODE END */
#pragma WEAK(gioNotification)
void gioNotification(gioPORT_t *port, uint32 bit)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
/* USER CODE BEGIN (22) */
/* USER CODE END */
}

/* USER CODE BEGIN (23) */
/* USER CODE END */




/* USER CODE BEGIN (46) */
/* USER CODE END */


/* USER CODE BEGIN (50) */
/* USER CODE END */


/* USER CODE BEGIN (53) */
/* USER CODE END */


/* USER CODE BEGIN (56) */
/* USER CODE END */

#pragma WEAK(epcCAMFullNotification)
void epcCAMFullNotification(void)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
/* USER CODE BEGIN (57) */
/* USER CODE END */
}
#pragma WEAK(epcFIFOFullNotification)
void epcFIFOFullNotification(uint32 epcFIFOStatus)
{
/*  enter user code between the USER CODE BEGIN and USER CODE END. */
/* USER CODE BEGIN (58) */
/* USER CODE END */
}

/* USER CODE BEGIN (59) */
/* USER CODE END */


/* USER CODE BEGIN (61) */
/* USER CODE END */

/* USER CODE BEGIN (63) */
/* USER CODE END */
