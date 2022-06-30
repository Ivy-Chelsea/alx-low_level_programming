#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 * Return: concatenated strig on success, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	cat = malloc(sizeof(char) * (l + 1));

	if (cat == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
		cat[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		cat[l++] = s2[i];

	cat[l] = '\0';

	return (cat);
}
