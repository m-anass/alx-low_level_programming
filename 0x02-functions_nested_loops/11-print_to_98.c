#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers
 * @n: number start from
 * Retrun: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
			n--;
		}
		printf("\n");
	}
	else
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
}
