#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to serach in
 * @size: size of array
 * @cmp: pointer to comparing function
 * Return: index of the first element for which cmp function does not return
 * 0 or -1 if no match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int f;

	if (array && cmp)
	{
		for (f = 0; f < size; f++)
		{
			if (cmp(array[f]) != 0)
				return (f);
		}
	}

	return (-1);
}
