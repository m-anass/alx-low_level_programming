#include <stdio.h>
/**
 * main - entry point
 * Descriotion: A C program that pritns put function
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
