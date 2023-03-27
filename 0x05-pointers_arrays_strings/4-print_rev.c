#include "main.h"
/**
 * print_rev - print string reversed
 * @s: the string
 */
void print_rev(char *s)
{
	int i = (int)strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
