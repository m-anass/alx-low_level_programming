#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: legnth of the line
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			int v = 0;

			while (v < i)
			{
				_putchar(' ');
				v++;
			}
			_putchar('\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
