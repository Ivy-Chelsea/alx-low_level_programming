#include <stdio.h>

/**
 * main - prints factors of number
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int t, n = 612852475143;

	for (t = 3; t < 782849; t = t + 2)
	{
		while ((n % t == 0) && (n != t)
				n = n / t;
	}
	printf("%lu\n", n);
	return (0);
}
