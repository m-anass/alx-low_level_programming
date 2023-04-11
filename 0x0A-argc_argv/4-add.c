#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array store arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", sum);
	return (0);
}
