#include "main.h"
/**
 * puts_half - print string
 * @str: the string
 */
void puts_half(char *str)
{
	unsigned long int i;

	if ((strlen(str) - 1) % 2 == 0)
	{
		i = (strlen(str) - 1) / 2;

		while (i < strlen(str))
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (strlen(str) - 2) / 2;

		while (i < strlen(str))
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
