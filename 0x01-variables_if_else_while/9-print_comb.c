#include <stdio.h>
/**
 * main - entry point
 * Descriotion: A C program that pritns put function
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		if (x == 57)
		{
			x++;
			continue;
		}
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
