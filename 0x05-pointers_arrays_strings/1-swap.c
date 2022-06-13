#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: pointer 1
 * @b: pointer 2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
