#include<stdio.h>

/**
 * main - Print lower case letters in reverse
 *
 * Return: always 0
 */
int main(void)
{
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int f;

	for (f = 0; f < 26; f++)
	{putchar(alph[f]);
	}
	putchar('\n');
	return (0);
}
