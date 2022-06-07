#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @g: int type number
 *
 * Return: absolute value of @g
 */
int _abs(int g)
{
	if (g < 0)
	{
		return (g * -1);
	}
	else
	{
		return (g);
	}
}
