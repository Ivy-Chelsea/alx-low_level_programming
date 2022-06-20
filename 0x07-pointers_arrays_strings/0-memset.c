#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: character to copy
 *
 * @n: number of times to copy integer b
 *
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for  (p = 0; p < n; p++)
	{
		s[p] = b;
	}

	return (s);
}
