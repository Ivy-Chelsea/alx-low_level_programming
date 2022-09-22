#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table
 * @key: key to find index of
 * @size: size of array of indexes
 * Return: index @ which key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
