#include "variadic_functions.h"

/**
 * sum_them_all - calculates sum of its parameters
 * @n: number of arguments passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int y;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (y = 0; y < n; y++)
		sum += va_arg(list, int);

	va_end(list);

		return (sum);
}
