#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma_flag = 0;
	hash_node_t *my_node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			my_node = ht->array[i];
			while (my_node != NULL)
			{
				printf("'%s': '%s'", my_node->key, my_node->value);
				my_node = my_node->next;
				if (my_node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
