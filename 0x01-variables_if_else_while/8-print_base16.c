#include<stdio.h>

/**
 * main - print numbers base 16
 *
 * Return: always 0
 */
int main(void)
{
	int g;
	char letter;

	for (g = 0; g < 10; g++)
	{
		putchar((g % 10) + '0');
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
