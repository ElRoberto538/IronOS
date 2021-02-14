# BSP section for STM32F07 Otter Iron

This folder contains the hardware abstractions required for the Otter Iron.

## Main abstractions

* Hardware Init
* -> Should contain all bootstrap to bring the hardware up to an operating point
* -> Two functions are required, a pre and post FreeRToS call
* I2C read/write
* Set PWM for the tip
* Links between IRQ's on the system and the calls in the rest of the firmware
