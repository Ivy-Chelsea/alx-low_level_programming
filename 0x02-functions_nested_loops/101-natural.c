#include <stdio.h>

/**
 * main - computes and prints sum of multiples
 * Return: always 0
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int z;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (z = 0; z < 1024; ++z)
	{
		if ((z % 3) == 0)
		{
			sum3 = sum3 + z;
		}
		else if ((z % 5) == 0)
		{
			sum5 = sum5 + z;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);

	return (0);
}
