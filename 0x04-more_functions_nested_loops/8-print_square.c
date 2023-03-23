#include "main.h"
/**
 * print_square - print square
 * @size: size of the square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int v;

			for (v = 0; v < size; v++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
