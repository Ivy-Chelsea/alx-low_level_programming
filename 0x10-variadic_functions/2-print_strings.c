#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @seperator: seperator between strings
 * @n: number of arguments
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int y;
	char *str;

	va_list list;

	va_start(list, n);

	for (y = 0; y < n; y++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!seperator)
			printf("%s", str);
		else if (seperator && y == 0)
			printf("%s", str);
		else
			printf("%s%s", seperator, str);
	}

	printf("\n");

	va_end(list);
}
