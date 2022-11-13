# AD5933_STM32_Platform
This simple STM32 platform is for AD5933 impedance analyzer showing result on 128*64OLED.

### Hardware List

1. stm32f411re(on ST nucleo-f411 board)

2. ad5933circuit(officially recommended design)

3. 7-Pin 128*64 OLED screen driven by ssd1306 with SPI connection


### Middle ware

1. freeRTOS

### tips
This is an STM32CubeIDE Project
The USART2 communication is enabled, and I've edit transmitting and receiving functions.
Also, the blue button on nucleo-f411 board is set as an rising-edge external interrupt, and it isuseful.
Open .ioc file with stm32cubeMX and you can easily configure other components.
