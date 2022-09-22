#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct hash_node_s - hash table node
 * @key: the key
 * @value: value corresponding the key
 * @next: pointer to next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table data structure
 * @size: array size
 * @array: array of size @size
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
void replace_value(hash_node_t **ht, const char *key, const char *value);
int check_key(hash_node_t *ht, const char *key);
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);
void print_list(hash_node_t *h);
void free_list(hash_node_t *head);

