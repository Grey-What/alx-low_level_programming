#include "lists.h"
/**
 * list_len - function determines number of elements in list
 *
 * @h: list node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
