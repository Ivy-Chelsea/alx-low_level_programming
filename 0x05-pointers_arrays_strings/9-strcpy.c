#include "main.h"

/**
 * *_strcpy - copies string to pointer
 * @dest: destination
 * @src: string
 *
 * Return: pointer destinatiom
 */
char *_strcpy(char *dest, char *src)
{
	int b, l;

	b = 0;

	while (src[b] != '\0')
	{
		b++;
	}

	for (l = 0; l < b; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}
