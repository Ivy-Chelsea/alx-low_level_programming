#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length of the string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;

	return (len);
}
