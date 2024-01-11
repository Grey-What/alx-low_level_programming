#include "lists.h"
/**
 * dlistint_len - function returns the number of elements in a linked list
 *
 * @h: pointer to the head struct of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
