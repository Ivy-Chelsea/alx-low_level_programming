#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into string
 * @ac: The number of arguments passed to program.
 * @av: An array of pointers to the argumennts
 * Return: NULL on error, pointer to string otherwise
 */
char *argstostr(int ac, char **av)
{
	char *strn;
	int rg, bt, i, s = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (rg = 0; rg < ac; rg++)
	{
		for (bt = 0; av[rg][bt]; bt++)
			s++;
	}

	strn = malloc(sizeof(char) * s + 1);

	if (strn == NULL)
		return (NULL);

	i = 0;

	for (rg = 0; rg < ac; rg++)
	{
		for (bt = 0; av[rg][bt]; bt++)
			strn[i++] = av[rg][bt];

		strn[i++] = '\n';
	}

	strn[s] = '\0';

	return (strn);
}
