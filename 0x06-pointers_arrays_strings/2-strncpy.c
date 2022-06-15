#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
