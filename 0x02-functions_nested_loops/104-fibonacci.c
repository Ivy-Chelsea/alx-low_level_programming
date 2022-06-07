#include <stdio.h>
#include "main.h"

/**
 * fibonacci_numbers - prints first 98 fibonacci numbers
 * Return: fibonacci numbers
 */
void fibonacci_numbers(int n)
{
	int f1 = 1, f2 = 2, i;

	if (n < 1)
		return;
	cout << f1 << " ";

	for (i = 1; i < n; i+=)
	{
		cout << f2 << " ";
		int next  = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	printf(',');
	printf(' ');
}
