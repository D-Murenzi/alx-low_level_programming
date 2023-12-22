/* this function deletes a hash table */

#include "hash_tables.h"

/**
 * hash_table_delete-delete hash table
 * @ht: the hash table to delete
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *list, *prev_node;
	unsigned long int a;

	a = 0;
	while (a < ht->size)
	{
		if (ht->array[a] != NULL)
		{
			node = ht->array[a];
			if (node->next != NULL)
			{
				list = node;
				while (list != NULL)
				{
					prev_node = list;
					free(list->key);
					free(list->value);
					list = list->next;
					free(prev_node);
				}
			}

			free(node->key);
			free(node->value);
			free(node);
		}
		a++;
	}
	free(ht->array);
	free(ht);
}
