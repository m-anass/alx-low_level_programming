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
	int z = 48;

	while (x <= 57)
	{
		y = 48;

		while (y <= 57)
		{
			z = 48;

			while (z <= 57)
			{
				if (x != y && x < y && y != z && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == 55)
					{
						z++;
						continue;
					}
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
