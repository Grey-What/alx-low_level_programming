#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with key
 *
 * @ht: pointer to hash table
 * @key: key to find the value of
 *
 * Return: NULL if no key found, else value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *my_node;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	my_node = ht->array[index];
	while (my_node != NULL && strcmp(my_node->key, key) != 0)
	{
		my_node = my_node->next;
	}
	if (my_node == NULL)
	{
		return (NULL);
	}
	else
		return (my_node->value);
}
