#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int p;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	return (p);
}
