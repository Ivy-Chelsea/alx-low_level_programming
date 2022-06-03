#include<stdio.h>

/**
 * main - print combination of 2 digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i, e;

	for (i = 0; i <= 98; i++)
	{
		for (e = i + 1; e <= 99; e++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');

			if (i == 98 && e == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
