#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on error, pointer to string otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int j, k = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] || s2[j]; j++)
		len++;

	s3 = malloc(sizeof(char) * len);

	if (s3 == NULL)
		return (NULL);

	for (j = 0; s1[j]; j++)
		s3[k++] = s1[j];

	for (j = 0; s2[j]; j++)
		s3[k++] = s2[j];

	return (s3);
}
