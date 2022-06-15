#include "main.h"

/**
 * string_toupper - changes lowercase letters of string to uppercase
 * @s: string to cahnge
 *
 * Return: resulting string
 */
char *string_toupper(char *s)
{
	int g;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] >= 'a' && s[g] <= 'z')
			s[g] = s[g] - 32;
	}

	return (s);
}
