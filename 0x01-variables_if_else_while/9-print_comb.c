#include<stdio.h>

/**
 * main - print all possible combinations of a digit
 *
 * Return: always 0
 */
int main(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		putchar((h % 10) + '0');
		if (h == 9)
		continue;
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
