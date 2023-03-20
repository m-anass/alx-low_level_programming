#include <stdio.h>
/**
 * main - entry point
 * Descriotion: A C program that pritns put function
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	int x = 48;
	int y = 48;

	while (x <= 57)
	{
		y = 48;

		while (y <= 57)
		{
			if (x != y && x < y)
			{
				putchar(x);
				putchar(y);
				if (x == 56)
				{
					y++;
					continue;
				}
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
