#include "main.h"

/**
 * print_alphabet_x10 - print alphabet a-z 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char j = 'a';
	int m, d;

	for (m = 0; m < 10; m++)
	{
		for (d = 0; d < 26; d++)
		{
			_putchar(j + d);
		}
		_putchar(10);
	}
}
