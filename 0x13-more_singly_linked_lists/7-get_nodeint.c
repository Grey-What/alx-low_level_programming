#include "lists.h"
/**
 * get_nodeint_at_index - determines nth node of linked list
 *
 * @head: head of linked list
 * @index: number of node to find
 *
 * Return: data at nth node, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *hold = head;

	while (hold != NULL && i < index)
	{
		hold = hold->next;
		i++;
	}
	if (!hold)
		return (NULL);
	return (hold);
}
