#include <stdio.h>
/**
 * main - entry point
 * Descriotion: A C program that pritns put function
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
