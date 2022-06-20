#include "main.h"

/**
 * *memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to cpy
 *
 * Return: pointer to destination
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		dest[p] = src[p];
	}

	return (dest);
}
