#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		z = a[x];
		a[x] = a[y];
		a[y--] = z;
	}
}
