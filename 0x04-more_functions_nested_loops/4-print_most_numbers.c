#include "main.h"
/**
 * print_numbers - print numbers
 * Return: void
 */
void print_most_numbers(void)
{
	int x = 48;

	while (x <= 57)
	{
		if (x == 50 || x == 52)
		{
			x++;
			continue;
		}
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
