#include "led.h"

void led_config(void)
{
    rcu_periph_clock_enable(LED1_RCU);
    rcu_periph_clock_enable(LED2_RCU);
    rcu_periph_clock_enable(LED3_RCU);
    rcu_periph_clock_enable(LED4_RCU);
    
    gpio_mode_set(LED1_GPIO_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, LED1_GPIO_PIN);
    gpio_output_options_set(LED1_GPIO_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, LED1_GPIO_PIN);

    gpio_mode_set(LED2_GPIO_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, LED2_GPIO_PIN);
    gpio_output_options_set(LED2_GPIO_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, LED2_GPIO_PIN);

    gpio_mode_set(LED3_GPIO_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, LED3_GPIO_PIN);
    gpio_output_options_set(LED3_GPIO_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, LED3_GPIO_PIN);

    gpio_mode_set(LED4_GPIO_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, LED4_GPIO_PIN);
    gpio_output_options_set(LED4_GPIO_PORT, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, LED4_GPIO_PIN);

}