#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodeas
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on succes
 */
int main(int argc, char  *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("ERROR\N");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		print("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
