#include "main.h"

/**
 * print_numbers - prints 0-9
 * followed by new line
 */
void print_numbers(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		_putchar(p + '0');
	}
	_putchar('\n');
}
