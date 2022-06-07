#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @n: type number
 *
 * Return: 98
 */
void print_to_98(int n)
{
	int o;

	for (o = n; o != 98;)

	{
		printf("%d, ", o);

		if (n > 98)
			o--;
		else
			o++;
	}
	printf("98\n");
}
