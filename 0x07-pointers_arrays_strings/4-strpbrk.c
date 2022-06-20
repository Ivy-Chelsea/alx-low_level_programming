#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches string for trace of a set of bytes
 * @s: string
 * @accept: string containing bytes to look for
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
