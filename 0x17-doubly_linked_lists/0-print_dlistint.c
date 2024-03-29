#include "lists.h"
/**
 * print_dlistint - function prints all the elements of a dlistint_t list
 *
 * @h: pointer to the struct head node of a doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
