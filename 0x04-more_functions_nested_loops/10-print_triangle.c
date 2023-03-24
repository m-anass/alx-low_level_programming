#include "main.h"
/**
 * print_triangle - print square
 * @size: size of the square
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 1;

		while (i <= size)
		{
			int v;
			int y;

			for (v = size - i; v > 0; v--)
				_putchar(' ');
			for (y = 1; y <= i; y++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
