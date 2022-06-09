#include "main.h"

/**
 * print_line - a function that drwas a straight line
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int v;

	if (n <= 0)
	{
		for (v = 1; v <= n; v++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
