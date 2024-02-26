#ifndef __LED_H
#define __LED_H

#include "gd32f4xx.h"
#include "systick.h"

#define LED1_RCU            RCU_GPIOE
#define LED1_GPIO_PORT      GPIOE
#define LED1_GPIO_PIN       GPIO_PIN_3
#define LED1(x)             do{x?\
                            gpio_bit_set(LED1_GPIO_PORT,LED1_GPIO_PIN):\
                            gpio_bit_reset(LED1_GPIO_PORT,LED1_GPIO_PIN);\
                            }while(0)
#define LED1_TOGGLE()       gpio_bit_toggle(LED1_GPIO_PORT,LED1_GPIO_PIN)  

#define LED2_RCU            RCU_GPIOD
#define LED2_GPIO_PORT      GPIOD
#define LED2_GPIO_PIN       GPIO_PIN_7
#define LED2(x)             do{x?\
                            gpio_bit_set(LED2_GPIO_PORT,LED2_GPIO_PIN):\
                            gpio_bit_reset(LED2_GPIO_PORT,LED2_GPIO_PIN);\
                            }while(0)
#define LED2_TOGGLE()       gpio_bit_toggle(LED2_GPIO_PORT,LED2_GPIO_PIN)

#define LED3_RCU            RCU_GPIOG
#define LED3_GPIO_PORT      GPIOG
#define LED3_GPIO_PIN       GPIO_PIN_3
#define LED3(x)             do{x?\
                            gpio_bit_set(LED3_GPIO_PORT,LED3_GPIO_PIN):\
                            gpio_bit_reset(LED3_GPIO_PORT,LED3_GPIO_PIN);\
                            }while(0)
#define LED3_TOGGLE()       gpio_bit_toggle(LED3_GPIO_PORT,LED3_GPIO_PIN)

#define LED4_RCU            RCU_GPIOA
#define LED4_GPIO_PORT      GPIOA
#define LED4_GPIO_PIN       GPIO_PIN_5
#define LED4(x)             do{x?\
                            gpio_bit_set(LED4_GPIO_PORT,LED4_GPIO_PIN):\
                            gpio_bit_reset(LED4_GPIO_PORT,LED4_GPIO_PIN);\
                            }while(0)
#define LED4_TOGGLE()       gpio_bit_toggle(LED4_GPIO_PORT,LED4_GPIO_PIN)


void led_config(void);

#endif