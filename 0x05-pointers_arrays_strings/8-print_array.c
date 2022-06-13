#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements on an array of integers
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		if (y == 0)
			printf("%d", a[y]);
		else
			printf(", %d", a[y]);
	}
	printf("\n");
}
