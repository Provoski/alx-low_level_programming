#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table of @size
 * @size: size of hash table
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *hash_table;
	hash_node_t *table_elements;

	hash_table = NULL;
	table_elements = NULL;
	i = 0;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
		return (NULL);
	hash_table->size = size;
	return (hash_table);
}
