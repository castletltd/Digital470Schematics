/**********************************************************************
* $Id$		ipc_cmd_buffer.c		2012-01-19
*//**
* @file		ipc_cmd_buffer.c
* @brief	IPC Command Buffer
* @version	1.0
* @date		19. January. 2012
* @author	NXP MCU SW Application Team
*
* Copyright(C) 2012, NXP Semiconductor
* All rights reserved.
*
***********************************************************************
* Software that is described herein is for illustrative purposes only
* which provides customers with programming information regarding the
* products. This software is supplied "AS IS" without any warranties.
* NXP Semiconductors assumes no responsibility or liability for the
* use of the software, conveys no license or title under any patent,
* copyright, or mask work right to the product. NXP Semiconductors
* reserves the right to make changes in the software without
* notification. NXP Semiconductors also make no representation or
* warranty that such application will be suitable for the specified
* use without further testing or modification.
* Permission to use, copy, modify, and distribute this software and its
* documentation is hereby granted, under NXP Semiconductorsí
* relevant copyright in the software, without fee, provided that it
* is used in conjunction with NXP Semiconductors microcontrollers.  This
* copyright, permission, and disclaimer notice must appear in all copies of
* this code.
**********************************************************************/
#include <stdint.h>

#include "ipc_queue.h"

/* block holding registers (pointers) and data for the commands */
cmdBlock hostCmdBufferControl __attribute__ ((section ("cmdBuffer_section")));

cmdToken _hostCmdBufferData[CMD_BUF_LEN] __attribute__ ((section ("cmdBuffer_section")));


