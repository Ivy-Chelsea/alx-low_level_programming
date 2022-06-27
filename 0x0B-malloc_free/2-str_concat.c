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
	char *q;
	unsigned int w = 0; e = 0, r = 0, t = 0;

	while (s1 && s1[r])
		r++;

	while (s2 && s2[t])
		t++;

	q = malloc(sizeof(char) * (r + t + 1));
	if (q == NULL)
		return (NULL);

	w = 0;
	e = 0;

	if (s1)
	{
		while (w < r)
		{
			q[w] = s1[w];
			w++
		}
	}

	if (s2)
	{
		while (w < (r + t))
		{
			q[w] = s2[e];
			w++;
			e++;
		}
	}
	q[w] '\0';

	return (q);
}
