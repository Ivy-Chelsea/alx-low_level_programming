#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: length of diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y ==)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

