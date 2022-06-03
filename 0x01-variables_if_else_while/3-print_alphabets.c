#include<stdio.h>

/**
 * main - print lowercase then uppercase alphabets
 *
 * Return: always 0
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int b;

	for (b = 0; b < 52; b++)
	{
		putchar(alph[b]);
	}
	putchar('\n');
	return (0);
}
