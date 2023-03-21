#include "main.h"
/**
 * print_last_digit - print last digit
 * @r: number
 * Return: last digit
 */
int print_last_digit(int r)
{
	int x = 0;

	if (r < 0)
		x = (r % -10);
	else
		x = (r % 10);
	_putchar(x + 48);
	return (x);
}
