#include "main.h"
/**
 * _isalpha - entry point
 * Descriotion: A C program that pritns put function
 * @c: the char to check
 * Return: Alawys 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
