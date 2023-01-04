#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - Searches for a value in an array
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: -1 if value is not present or array is NULL
 * 	   Otherwise, the first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%ld]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}

	return (-1);
}
