#include "basic_io.h"
#include "umouse_v3_gpio.h"
#include <libopencm3/stm32/gpio.h>


/*
 * Output a status code on the uMouse's LEDs, the status code is a bitwise OR
 * of LEDx_PIN.
 *
 * Important: LED GPIOs need to have been set up before calling this function.
 */
void status_code(uint16_t status)
{
	gpio_clear(LED_PORT, ALL_LED_PINS);
	gpio_set(LED_PORT, status);
}


/*
 * Returns the bitwise OR of SW1_PIN and SW2_PIN, depending on which is on.
 *
 * Important: Switch GPIOs need to have been set up before calling this
 * function.
 */
uint16_t switch_status(void)
{
	return gpio_get(SW_PORT, ALL_SW_PINS);
}
