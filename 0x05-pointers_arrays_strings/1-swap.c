#include "main.h"
/**
 * swap_int - swap int
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
