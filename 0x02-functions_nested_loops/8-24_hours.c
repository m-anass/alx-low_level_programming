#include "main.h"
/**
 * jack_bauer - time
 * Description: jdvn
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar(hour / 10 + 48);
			_putchar(hour % 10 + 48);
			_putchar(':');
			_putchar(min / 10 + 48);
			_putchar(min % 10 + 48);
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
