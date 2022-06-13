#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length of the string
 */
int  _strlen(char *s)
{
	int p;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	return (p);
}
