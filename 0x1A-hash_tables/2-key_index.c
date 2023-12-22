/* this file contains function that generates an index of key in hashtable*/

#include "hash_tables.h"

/**
 * key_index-function to generate index for a key in hashtable
 * @key: the key
 * @size: the size of the hash table
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int address, index;

	address = hash_djb2(key);
	index = address % size;

	return (index);
}
