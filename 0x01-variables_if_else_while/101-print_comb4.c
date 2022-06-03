#include<stdio.h>

/**
 * main - print 3 digit combination
 *
 * Return: always 0
 */
int main(void)
{
	int i, v, y;

	for (i = 0; i < 8 ; i++)
	{
		for (v = i + 1; v < 9 ; v++)
		{
			for (y = v + 1; y < 10; y++)
			{
				putchar((i % 10) + '0');
				putchar((v % 10) + '0');
				putchar((y % 10) + '0');

				if (i == 7 && v == 8 && y == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
