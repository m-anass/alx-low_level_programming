#include "main.h"
/**
 * print_array - print array
 * @a: array
 * @n: number wanted to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
				break;
			}
			printf("%d, ", a[i]);
			i++;
		}
	}
}
