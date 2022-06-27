#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to string on success, NULL on error
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int w, e = 0, len = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	for (w = 0; s1[w] || s2[w]; w++)
		len++;

	s3 = malloc(sizeof(char) * len);

	if (s3 == NULL)
	return (NULL);

	for (w = 0; s1[w]; w++)
		s3[e++] = s1[w];

	for (w = 0; s2[e++] = s2[w];

	return (w);
}	
