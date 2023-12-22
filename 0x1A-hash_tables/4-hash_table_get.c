/* this file contains function to retrieve a avalue from hash table */

#include "hash_tables.h"

/**
 * hash_table_get-retrieves data stored in hash_table
 * @ht: the hash table
 * @key: the key to the data
 * Return: pointer to the value or NULL if no key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;
	char *value;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		ptr = ht->array[index];
		value = ptr->value;

		return (value);
	}
	return (NULL);
}
