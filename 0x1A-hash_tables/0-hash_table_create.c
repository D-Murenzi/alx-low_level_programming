/* this file contains a function that creates a hash_table*/

#include "hash_tables.h"

/**
 * hash_table_create-creates a hash table
 * @size: the size of hash table to be created
 * Return: pointer to the hash_table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	if (size)
	{
		hash_table_t *ptr;

		ptr = (hash_table_t *)malloc(sizeof(hash_table_t));
		if (ptr == NULL)
		{
			return (NULL);
		}

		ptr->size = size;
		ptr->array = malloc(sizeof(hash_table_t) * size);
		if (ptr->array == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	return (NULL);
}
