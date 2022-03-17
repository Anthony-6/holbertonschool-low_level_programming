#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: null if an error occured or the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht =  malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;

	ht->array = malloc(size * sizeof(hash_table_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
