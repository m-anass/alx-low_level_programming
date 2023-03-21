#include <stdio.h>
/**
 * main - entry point
 * Description: jfls
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i <= 50)
	{
		sum += i;
		if (i == 50)
		{
			printf("%d\n");
			break;
		}
		printf("%d, ");
	}
	return (0);
}
