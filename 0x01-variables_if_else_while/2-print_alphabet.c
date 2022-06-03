#include<stdio.h>

/**
 * main - Print lower case alphabets
 * Return: always 0
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alph[a]);
	}
	putchar('\n');
	return (0);
}
