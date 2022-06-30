#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for array using malloc, memory is set to zero
 * @nmemb: number of elements
 * @size: bytes
 * Return: NULL on failure, otherwise pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *z;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(size * nmemb);

	if (z == NULL)
		return (NULL);

	f = z;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (z);
}
