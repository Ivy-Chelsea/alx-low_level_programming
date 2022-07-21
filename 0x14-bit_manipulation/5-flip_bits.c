#include "main.h"

/**
 * flip_bits -counts number of bit to change
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (y = 63; y >= 0; y--)
	{
		current = exclusive >> y;
		if (current & 1)
			count++;
	}

	return (count);
}
