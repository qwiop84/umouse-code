#ifndef UMOUSE_V3_GPIO_H
#define UMOUSE_V3_GPIO_H


#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>


/* LED constants */

#define LED_RCC RCC_GPIOA

#define LED_PORT GPIOA

#define LED1_PIN GPIO6
#define LED2_PIN GPIO7
#define LED3_PIN GPIO2
#define ALL_LED_PINS LED1_PIN | LED2_PIN | LED3_PIN


/* Switch constants */

#define SW_RCC RCC_GPIOB

#define SW_PORT GPIOB

#define SW1_PIN GPIO7
#define SW2_PIN GPIO6
#define ALL_SW_PINS SW1_PIN | SW2_PIN


#endif /* UMOUSE_V3_GPIO_H */
