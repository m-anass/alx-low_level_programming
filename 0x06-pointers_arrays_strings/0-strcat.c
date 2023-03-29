#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: new string
 */
char *_strcat(char *dest, char *src)
{
	dest += strlen(dest);
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
