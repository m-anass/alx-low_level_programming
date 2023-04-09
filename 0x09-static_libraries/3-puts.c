#include "main.h"
/**
 * _puts - print string
 * @str: the string
 */
void _puts(char *str)
{
	unsigned long int i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
