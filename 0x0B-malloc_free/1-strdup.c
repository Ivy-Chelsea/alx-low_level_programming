#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies string as a parameter
 * @str: the string
 * Return: pointer to string on success, NULL on error
 */
char *_strdup(char *str)
{
	char *lib;
	unsigned int y, k;

	if (str == NULL)
		return (NULLL);

	while (str[k])
		k++;

	lib = malloc(sizeof(char) * (k + 1));

	if (lib == NULL)
		return (NULL);

	while ((lib[y] = str[y]) != '\0')
		y++;

	return (lib);
}
