#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *m = s, value = b;

	for (i = 0; i < n; i++)
	{
		m[i] = value;
	}

	return (s);
}
