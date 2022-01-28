#include "hash_tables.h"
/**
 * key_index - get the index of a given key
 * Return: the index of the table
 * @key: key needed to the get the index
 * @size: size of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
