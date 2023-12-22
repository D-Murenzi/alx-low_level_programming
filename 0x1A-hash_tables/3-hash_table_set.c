/* this file contains a function that adds an element in the hash table*/

#include "hash_tables.h"

/**
 * hash_table_set-adds an elt to the hash table
 * @ht: the hash table to add elt to
 * @key: the key of new elt
 * @value: the value stored by the new elt
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (key)
	{
		hash_node_t *new_node;
		unsigned long int index;

		new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
		if (new_node == NULL)
		{
			return (0);
		}
		new_node->value = malloc(sizeof(char *) * (strlen(value) + 1));
		if  (new_node->value == NULL)
		{
			return (0);
		}
		new_node->key = malloc(sizeof(char *) * (strlen(key)) + 1);
		if (new_node->key == NULL)
		{
			return (0);
		}

		strcpy(new_node->value, value);
		strcpy(new_node->key, (char *)key);
		new_node->next = NULL;
		/* this is index of new node in the table */
		index = key_index((unsigned char *)key, ht->size);
		/* checking if the index is non empty */
		if (ht->array[index] != NULL)
		{
			new_node->next = ht->array[index];
		}
		ht->array[index] = new_node;
	}
	return (0);
}
