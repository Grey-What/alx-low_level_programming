#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of function
 *
 * @head: head of doubly linked list
 * @index: nth node to be found
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0, count = 0;

	if (!head)
		return (NULL);

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (count < index)
		return (NULL);

	while (i <= index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
