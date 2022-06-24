#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to string
 * Return: 1 and type error for error,0 otherwise
 */
int main(int argc, char *argv[])
{
	int y, p, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);
	p = atoi(argv[2]);
	mul = y * p;

	printf("%d\n", mul);

	return (0);
}
