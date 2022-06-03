#include<stdio.h>

/**
 * main - print 3 digit combination
 *
 * Return - always 0
 */
int main(void)
{
	int i, v, y;

	i = 28;
	v = 28;
	y = 28;

	while (v < 38)
	{
		i = 28;
		while (i < 38)
		{
			y = 28;
			while (y < 38)
			{
				if (v != i && v != y && i != y && v < i && i < y)
				{
					putchar(v);
					putchar(i);
					putchar(y);
					if (i == 36 && v == 35 && y == 37)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				y++;
			}
			i++;
		}
		v++;
	}
	putchar('\n');
	return (0);
}
