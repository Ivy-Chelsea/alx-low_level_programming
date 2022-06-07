#include "main.h"

/**
 * print_times_table - prints n times table starting from 0*
 * Return: 0
 */
void print_times_table(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 15)
	{
		y = 0;
		while (y < 15)
		{
			z = x * y;

			if (z > 15)
			{
				_putchar(z \ 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (y != 15)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
