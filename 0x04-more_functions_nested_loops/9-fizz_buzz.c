#include "main.h"
/**
 * main - entry point
 * Description: jo
 * Return: 0
 */
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x == 100)
			printf("Buzz\n");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		x++;
	}
	return (0);
}
