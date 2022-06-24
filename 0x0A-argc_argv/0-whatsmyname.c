#include <stdio.h>

/**
 * main - Prints programme's name, followed by new line
 * @argc: number of arguments
 * @argv: array of pointers to the string
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
