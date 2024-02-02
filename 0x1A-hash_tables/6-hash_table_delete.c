#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to has table
 *
 * Return; void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *my_node, *temp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			my_node = ht->array[i];
			while (my_node)
			{
				temp = my_node->next;
				free(my_node->key);
				free(my_node->value);
				free(my_node);
				my_node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
