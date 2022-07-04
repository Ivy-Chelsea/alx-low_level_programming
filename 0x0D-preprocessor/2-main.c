#include <stdio.h>

/**
 * main - prints name of file it was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%S\n", __FILE__);
	return (0);
}
