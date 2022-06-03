#include <stdio.h>

/**
 * main - print all alphabet except e and q
 *
 * Return: 0 always
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int c;

	for (c = 0; c < 24; c++)
	{
		putchar(alph[c]);
	}
	putchar('\n');
	return (0);
}
