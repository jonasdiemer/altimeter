/* Sense Altitude and print on UART */

#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
    uint8_t led_mask = (1<<PB3);

	/* set LED port to output*/
	DDRB |= led_mask;

	while(1) {
        PORTB ^= led_mask;
        _delay_ms(1000);
	}

	return 0;
}
