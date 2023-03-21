#include "main.h"
/**
 * print_sign - print the sign of nunmber
 * @n: the number
 * Return: 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putcar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
