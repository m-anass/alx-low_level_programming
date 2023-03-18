#include <unistd.h>
/**
 * main - entry point
 * Description: print a 
 * Return: 1 (not success)
 */
int main(void)
{
	char quot[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1,quot,59);
	return (1);
}
