#include<stdio.h>

/**
 * main - combinations of 2 digits
 *
 * Return: always 0
 */
int main(void)
{
	int i, v;

	for (i = 48; i <= 56; i++)
	{
		for (v = 49; v <= 57; v++)
		{
			if (v > i)
			{
				putchar(i);
				putchar(v);
				if (i != 56 || v != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

