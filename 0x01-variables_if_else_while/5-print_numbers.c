#include<stdio.h>

/**
 * main - print base 10 digits
 *
 * Return: always 0
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		printf("%d", d);
	}
	putchar('\n');
	return (0);
}
