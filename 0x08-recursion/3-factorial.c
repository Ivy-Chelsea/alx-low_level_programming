#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: the number
 * Return: -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
