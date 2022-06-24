#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: The number of arguments 
 * @argv: An array of pointers to the string
 * Return: 1 if number contains symbols that are not digits, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int y, p, sum = 0;

	for (y = 1; y < argc; y++)
	{
		for (p = 0; argv[y][p]; p++)
		{
			if (argv[y][p] < '0' || argv[y][p] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[y]);
	}

	printf("%d\n", sum);

	return (0);
}
