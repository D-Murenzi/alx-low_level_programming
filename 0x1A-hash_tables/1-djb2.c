/* this file contains djb2 alogrithm c-implementation */

#include "hash_tables.h"

/**
 * hash_djb2-hash function, djb2 implememntation
 * @str: the key
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
