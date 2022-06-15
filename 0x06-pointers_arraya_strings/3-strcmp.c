#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string 1
 * @s2: string two
 *
 * Return: negative if s1 is less than s2, 0 if equal
 * positive if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
