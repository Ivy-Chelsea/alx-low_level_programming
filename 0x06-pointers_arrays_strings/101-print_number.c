#include "main.h"

/**
 * print_number - prints a number
 * @n: the number
 */
void print_number(int n)
{
	unsigned int h;

	if (n < 0)
	{
		h = -n;
		_putchar('-');
	}
	else
	{
		h = n;
	}

	if (h / 10)
		print_number(h / 10);

	_putchar((h % 10) + '0');
}
