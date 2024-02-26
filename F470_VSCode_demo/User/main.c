#include "main.h"
#include "led.h"
#include "usart.h"


uint32_t i, j, k, l;

int main(void)
{
    systick_config();
    dwt_delay_config();
    led_config();
    usart_config(115200);

    i = rcu_clock_freq_get(CK_SYS);
    j = rcu_clock_freq_get(CK_AHB);
    k = rcu_clock_freq_get(CK_APB1);
    l = rcu_clock_freq_get(CK_APB2);
    
    
    LED1(1);
    LED2(1);
    LED3(1);
    LED4(1);
    
    while(1) 
    {
        LED1_TOGGLE();
        dwt_delay_ms(1000);
        printf("%d,%d,%d,%d\r\n", i, j, k, l);
    }
}
