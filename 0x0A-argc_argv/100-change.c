#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array store arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int change = 0;

		change = Change(change, x);
		printf("%d\n", change);
	}
	return (0);
}
/**
 * Change - calc change
 * @change: change
 * @x: x
 * Return: 0
 */
int Change(int change, int x)
{
	if (x >= 25)
	{
		change += x / 25;
		x %= 25;
		Change(change, x);
	}
	else if (x >= 10)
	{
		change += x / 10;
		x %= 10;
		Change(change, x);
	}
	else if (x >= 5)
	{
		change += x / 5;
		x %= 5;
		Change(change, x);
	}
	else if (x >= 2)
	{
		change += 2;
		x %= 2;
		Change(change, x);
	}
	else if (x == 1)
	{
		change++;
	}
	return (change);
}
