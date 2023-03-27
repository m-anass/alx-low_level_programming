#include "main.h"
/**
 * puts2 - print string
 * @str: the string
 */
void puts2(char *str)
{
	unsigned long int i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
