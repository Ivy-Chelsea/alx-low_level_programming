#include "main.h"

/**
 * leet - encodes string in 1337
 * @s: the string
 *
 * Return: resulting string
 */
char *leet(char *s)
{
	int u, v;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (u = 0; s[u] != '\0'; u++)
	{
		for (v = 0; v < 10; v++)
		{
			if (s[u] == a[v])
			{
				s[u] = b[v];
			}
		}
	}

	return (s);
}
