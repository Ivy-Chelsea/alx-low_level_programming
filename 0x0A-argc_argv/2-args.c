#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: arraay of pointers to the string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}

	return (0);
}
