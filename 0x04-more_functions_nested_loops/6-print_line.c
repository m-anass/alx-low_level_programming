#include "main.h"
/**
 * print_line - print line
 * @n: numbet of line
*/
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
