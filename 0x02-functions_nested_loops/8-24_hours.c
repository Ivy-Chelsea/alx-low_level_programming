#include "main.h"

/**
 * jack_bauer - prints minutes of the day
 * From 00:00 to 23:59
 */
void jack_bauer(void)
{
	int n, g;

	n = 0;

	while (n < 24)
	{
		g = 0;
		while (g < 60)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar('\n');
			g++;
		}
		n++;
	}
}
