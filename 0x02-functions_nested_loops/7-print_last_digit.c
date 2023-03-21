#include "main.h"
/**
 * print_last_digit - print last digit
 * @r: number
 * Return: last digit
 */
int print_last_digit(int r)
{
	int x = 0;

	x = (r % 10) + 48;
	_putchar(x);
	return (0);
}
