#include "main.h"

/**
 * more_numbers - a function that prints 10 times the number, from 0 to 14
 *
 * Return: 0 to 14 times 10 followed by new line
 */
void more_numbers(void)
{
	int n, m;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
