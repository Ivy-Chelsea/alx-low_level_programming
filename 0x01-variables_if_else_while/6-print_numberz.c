#include<stdio.h>

/**
 * main - print from 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
	int e;

	for (e = 0; e < 10; e++)
	{
		putchar((e % 10) + '0');
	}
	putchar('\n');
	return (0);
}
