#include "hash_tables.h"
/**
 * key_index - gets index of key inside hashtable using djb2 algorithm
 *
 * @key: key to find index for
 * @sze: size of array in hash table
 *
 * Retur: index where key value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
