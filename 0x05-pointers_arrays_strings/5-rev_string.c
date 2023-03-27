#include "main.h"
/**
 * rev_string - print string reversed
 * @s: the string
 */
void rev_string(char *s)
{
	int size = (int)strlen(s) - 2;
	char tmp = *s;
	int i = size;
	int j = 0;
	while (i >= 0 && j < size)
	{
		tmp[j] = s[i];
		i--;
		j++;	
	}
	s = &tmp;
}
