#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @r: type integer
 *
 * Return: value of last digit
 */
int print_last_digit(int r)
{
	int last;

	last = r % 10;

	if (last < 0)
		last = -last;

	_putchar('0' + last);
	return (last);
}
