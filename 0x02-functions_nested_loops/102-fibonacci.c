#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%1d, ", j);
		}
		else
		{
			printf("%1d\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
