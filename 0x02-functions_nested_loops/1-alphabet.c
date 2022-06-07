#include "main.h"

/**
 * print_alphabet - print alphabet a-z
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char j = 'a';
	int m;

	for (m = 0; m < 26; m++)
	{
		_putchar(j + m);
	}
	_putchar(10);
}
