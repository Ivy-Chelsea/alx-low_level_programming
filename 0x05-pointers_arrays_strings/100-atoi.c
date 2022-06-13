#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 *
 * Return: integer converted
 */
int _atoi(char *s)
{
	int i, d, n, p, f, b;

	i = 0;
	d = 0;
	n = 0;
	p = 0;
	f = 0;
	b = 0;

	while (s[p] != '\0')
		p++;

	while (i < p && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			b = s[i] - '0';
			if (d % 2)
				b = -b;
			n = n * 10 + b;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
