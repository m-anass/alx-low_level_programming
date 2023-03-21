#include "main.h"
/**
 * times_table - snjf
 * Discription: nvkd
 * Return: void
 */
void times_table(void)
{
	int i = 0, v, prod;

	while (i <= 9)
	{
		v = 0;
		while (v <= 9)
		{
			prod = i * v;
			if (v == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else
			{
				if (prod > 10)
					_putchar(prod / 10 + 48);
				else
					_putchar(' ');
				_putchar(prod % 10 + 48);
			}
			v++;
		}
		i++;
		_putchar('\n');
	}
}
