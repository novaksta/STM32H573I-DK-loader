/**
 ******************************************************************************
 * @file    Dev_Inf.c
 * @author  MCD Application Team
 * @brief   This file defines the structure containing informations about the
 *          external flash memory IS42S32400F used by STM32CubeProgramer in
 *          programming/erasing the device.
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include "Dev_Inf.h"

/* This structure containes information used by ST-LINK Utility to program and erase the device */
#if defined (__ICCARM__)
__root struct StorageInfo const StorageInfo  =  {
#else
		struct StorageInfo const StorageInfo = {
#endif
				"h5-loader", 	      					// Device Name
				NOR_FLASH,                      /* Device Type */
				0x90000000UL,                   /* Device Start Address */
				0x4000000UL,                    /* Device Size in Bytes (64MBytes) */
				0x1000UL,                       /* Programming Page Size 4096Bytes */
				0xFFUL,                         /* Initial Content of Erased Memory */
				// Specify Size and Address of Sectors (view example below)
				{
						{
								0x00000400UL, /* Sector Num : 1024 */
								0x00010000UL, /* Sector Size: 64KBytes */
						},
						{ 0x00000000, 0x00000000 }
				}

		};

		/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
