#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - determine if the number is 0,greater than 5 or less than 6
 * Return: always 0
 */
int main(void)
{
	int n, a = 98;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (a > 5)
	{
		printf("Last digit of %d is 8 and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of 980 is 0 and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
