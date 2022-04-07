#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

#include "umouse_v3_gpio.h"
#include "basic_io.h"


int main(void)
{
	rcc_periph_clock_enable(LED_RCC);
	rcc_periph_clock_enable(SW_RCC);
	gpio_mode_setup(LED_PORT, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, ALL_LED_PINS);
	/* NOTE: The switch inputs require a pull-down resistor, since there isn't
	 * one on the board */
	gpio_mode_setup(SW_PORT, GPIO_MODE_INPUT, GPIO_PUPD_PULLDOWN, ALL_SW_PINS);
	int status = 0;
	while(1) {
		/* wait a little bit */
		for (int i = 0; i < LITTLE_BIT; i++) {
			__asm__("nop");
		}
		status_code(switch_status());
		status++;
	}
	return 0;
}
