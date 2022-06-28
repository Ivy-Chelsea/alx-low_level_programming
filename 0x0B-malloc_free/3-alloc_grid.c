#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 * @width: width
 * @height: height
 * Return: NULL on failure, i.e if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **aray, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	aray = (int **) malloc(sizeof(int *) * height);

	if (aray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		aray[i] = (int *) malloc(sizeof(int) * width);
		if (aray[i] == NULL)
		{
			free(aray);
			for (j = 0; j <= i; j++)
				free(aray[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			aray[i][j] = 0;
		}
	}
	return (aray);
}
