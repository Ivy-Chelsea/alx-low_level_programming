#include "main.h"

/**
 * *_strchr - locates character in a string
 * @s: string
 * @c: char
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int w;

	while (1)
	{
		w = *s++;
		if (w == c)
		{
			return (s - 1);
		}
		if (w == 0)
		{
			return (NULL);
		}
	}
}
