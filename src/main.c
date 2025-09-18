#include <stdint.h>
#include "stm32f4xx.h"

#define LED_PIN 5

void main(void){
  
  // enable GPIOA clock.
  RCC->AHB1ENR |= (1 << RCC_AHB1ENR_GPIOAEN_Pos);

  // ensure the clock is really stable before accessing the peripheral registers.
  volatile uint32_t dummy;
  dummy = RCC->AHB1ENR;
  dummy = RCC->AHB1ENR;

  // configure PA5 as output.
  GPIOA->MODER |= (1 << GPIO_MODER_MODER5_Pos)

  // toggle PA5 in an infinite loop with a delay.
  while(1)
  {
    GPIOA->ODR ^= (1 << LED_PIN);    
    for (uint32_t i = 0; i < 1000000; i++);
  }
}
