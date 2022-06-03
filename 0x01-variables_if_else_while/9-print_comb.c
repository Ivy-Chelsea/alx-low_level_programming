#include<stdio.h>

/**
 * main - print all possible combinations of a digit
 *
 * Return: always 0
 */
int main(void)
{
	int h;

	for (h = 5; h < 15; h++)
	{
		putchar(h);
		if (h != 14)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
