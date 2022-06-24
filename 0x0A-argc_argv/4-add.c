#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to string
 * Return: 1 if number contains symbols that are not digits, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int y, p, sum;

	for (y = 1; y < argc; y++)
	{
		for (p = 0; argv[y][p]; p++)
		{
			if (argv[y][p] < '0' || argv[y][p] > '9')
			{
				print("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[y]);
	}

	printf("%d\n", sum);

	return (0);
}
