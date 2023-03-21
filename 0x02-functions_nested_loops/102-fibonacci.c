#include <stdio.h>
/**
 * main - entry point
 * Description: jfls
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int sum = 1;
	int old_sum = 0;
	while (i <= 50)
	{
		old_sum = sum
		sum += old_sum;
		if (i == 50)
		{
			printf("%d\n", sum);
			break;
		}
		printf("%d, ", sum);
		i++;
	}
	return (0);
}
