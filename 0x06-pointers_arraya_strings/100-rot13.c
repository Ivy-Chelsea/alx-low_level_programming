#include "main.h"

/**
 * rot13 - encodes string in rot13
 * @s: the string
 *
 * Return: resulting string
 */
char *rot13(char *s)
{
	int k, r;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGH1JKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (r = 0; a[r] != '\0'; r++)
		{
			if (s[k] == a[r])
			{
				s[k] = b[r];
				break;
			}
		}
	}

	return (s);
}
