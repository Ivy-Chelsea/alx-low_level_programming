#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to number changed
 * @index: index of bit to be set to 1
 * Return: 1 for succes, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
