#include "hash_tables.h"

/**
 * hash_djb2 - function implementing djb2 algorithm
 * @str:: string to hash
 * Return: hash index corresponding to the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int g;

	hash = 5381;
	while ((g = *str++))
	{
		hash = ((hash << 5) + hash) + g;
	}
	return (hash);
}
