#include "main.h"

/**
 * print_numbers - prints 0-9
 * followed by a new line
 */
void print_numbers(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		_putchar(y + '0');
	}
	_putchar('\n');
}
