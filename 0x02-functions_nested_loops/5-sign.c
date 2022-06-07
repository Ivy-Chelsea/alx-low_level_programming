#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @n: type integer, can be positive or negative
 *
 * Description: print +, 0 or - depending on sign
 *
 * Return: 1 if +, 0 if zero, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
