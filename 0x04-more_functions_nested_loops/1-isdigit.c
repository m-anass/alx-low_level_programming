#include "main.h"
/**
 * _isdigit - checks if the letter is uppercase
 * @c: the letter
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
