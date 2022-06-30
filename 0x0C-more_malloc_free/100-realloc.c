#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory block using maloc and free
 * @ptr: pointer to memory previousely allocated with call to malloc
 * @old_size: size in bytes of allocated space
 * @new_size: new size in bytes of the new memory block
 * Return: NULL on error, pointer to newly allocated memory block otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr0;
	char *ptr1;
	unsigned int g;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr0 = malloc(new_size);
	if (!ptr0)
		return (NULL);

	ptr1 = ptr;

	if (new_size < old_size)
	{
		for (g = 0; g < new_size; g++)
			ptr0[g] = ptr1[g];
	}

	free(ptr);
	return (ptr0);
}
