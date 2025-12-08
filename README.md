# STM32H573I-DK-loader

STM32H573I-DK external loader ported to STM32CubeIDE (from IAR to gcc linker/startup). Almost whole code based on [stm32-external-loader](https://github.com/STMicroelectronics/stm32-external-loader), please follow the license when adapting.

When modifying linker this:

    `KEEP(*Loader_Src.o(.text))`
    `KEEP(*Loader_Src.o(.text*))`
    
can be used instead of `KEEP`ing namely all needed fuctions.
