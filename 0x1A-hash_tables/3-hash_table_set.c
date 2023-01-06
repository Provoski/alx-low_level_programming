#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table.
 * @ht: table to add elements to
 * @key: element key
 * @value: element value
 * Return: 1 if it succeeded, 0 otherwise In
 * case of collision
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element, *head_index, *temp_index;
	unsigned long int hash_key;

	new_element = head_index = temp_index = NULL;
	hash_key = hash_djb2(key);
	new_element = malloc(sizeof(hash_node_t) * 1);
	if (!new_element)
		return (-1);
	new_element->key = key;
	new_element->value = value;
	new_element->next = NULL;
	if (ht[hash_key] == NULL)
	{
		ht[hash_key] = new_element;
		return (1);
	}
	if (ht[hash_key] != NULL)
	{
		if (head_index == NULL)
			head_index = ht[hash_key];
		else
		{
			temp_index = head_index;
			while (temp_index->next != NULL)
			{
				temp_index->next = new_element;
			}
			return (0);
		}
	}
}

