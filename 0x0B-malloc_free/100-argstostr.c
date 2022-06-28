#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments passed
 * @av: rray of poiters to argument
 * Retrun: pointer to new string on success, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	char *strn, rg, bt, i,s = ac;

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
