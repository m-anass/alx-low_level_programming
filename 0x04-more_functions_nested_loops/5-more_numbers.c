#include "main.h"
/**
 * more_numbers - print numbers 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, x;

	while (i < 10)
	{
		x = 0;

		while (x <= 14)
		{
			if (x > 9)
				_putchar('1');
			_putchar(x % 10 + 48);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
