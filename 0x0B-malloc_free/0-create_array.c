#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates array of chars & initializes with a specific char.
 * @size: size of array
 * @c: char to initialize array
 * Return: Null on error, pointer to arrray on success
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int r = 0;

	if (size == 0)
		return (NULL);

	t = (char *) malloc(sizeof(char) * size);

	if (t == NULL)
		return (0);

	while (r < size)
	{
		*(t + r) = c;
		r++;
	}

	*(t + r) = '\0';

	return (t);
}
