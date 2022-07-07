#include "variadic_functions.h"

/**
 * print_numbers - prints numbers as parameters
 * @seperator: string to be printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int y;
	va_list list;

	va_start(list, n);

	for (y = 0; y < n; y++)
	{
		if (!seperator)
			printf("%d", va_arg(list, int));
		else if (seperator && y == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", seperator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
