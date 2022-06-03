#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - determine if the number is 0,greater than 5 or less than 6
 * Return: always 0
 */
int main(void)
{
	int n, 3;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (3 > 5)
	{
		printf("%d is greater than 5\n", n, 0);
	}
	else if (3 == 0)
	{
		printf("%d is 0\n", n, 0);
	}
	else
	{
		printf("%d is less than 6 and not 0\n", n, 0);
	}
	return (0);
}
		      
