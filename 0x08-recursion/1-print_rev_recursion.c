#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*S != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
