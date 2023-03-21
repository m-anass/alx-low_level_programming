#include "main.h"
/**
 * print_alphabet - print alphabet chars
 * Descriotion: A C program that pritns put function
 * Return: Alawys 0 (Success)
 */
void print_alphabet(void)
{
	int x = 97;

	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
