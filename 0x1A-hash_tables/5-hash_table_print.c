/* this file contains a function that prints a hash table */

#include "hash_tables.h"

/**
 * hash_table_print-prints hash table
 * @ht: the hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node, *list;
	unsigned long int a = 0, b = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (a < ht->size)
	{
		if (ht->array[a] != NULL)
		{
			node = ht->array[a];
			if (b != 0)
			{
				printf(", ");
			}
			if (node->next == NULL)
			{
				b++;
				printf("'%s' : '%s'", node->key, node->value);
			}
			else
			{
				list = node;
				while (list != NULL)
				{
					b++;
					printf("'%s' : '%s'", list->key, list->value);
					if (list->next != NULL)
					{
						printf(",");
					}
						list = list->next;
				}
			}
		}
		a++;
	}
	printf("}\n");
}

