#include <stdio.h>
#include "main.h"

/**
 * largest_integer - prints largest of 3 integers
 * @a: type number
 * @b: type number
 * @c: type number
 * Return: largest number
 */

int largest_integer(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
