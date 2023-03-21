#include "main.h"
/**
 * print_alphabet_x10 - print alphabet chars
 * Descriotion: A C program that pritns put function
 * Return: Alawys 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int x = 97;

		while (x <= 122)
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
