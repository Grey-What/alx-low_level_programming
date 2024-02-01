#include "hash_tables.h"
/**
 * hash_table_create - creates a has table
 *
 * @size: size of the array
 *
 * Return: pointer to struct hastable, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *my_hashtable = malloc(sizeof(hash_table_t));

	if (!my_hashtable)
	{
		return (NULL);
	}
	my_hashtable->size = size;
	my_hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (!my_hashtable->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		my_hashtable->array[i] = NULL;
	}
	return (my_hashtable);
}
