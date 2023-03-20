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
	int n = 48;

	while (x <= 57)
	{
		y = 48;

		while (y <= 57)
		{
			z = x;

			while (z <= 57)
			{
				n = y;

				while (n <= 57)
				{
					if ((x == y && y == z && z == n ) || (x == z && y == n))
					{
						n++;
						continue;
					}
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(n);
					if (x == 57 && y == 56)
					{
						n++;
						continue;
					}
					putchar(',');
					putchar(' ');
					n++;
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
