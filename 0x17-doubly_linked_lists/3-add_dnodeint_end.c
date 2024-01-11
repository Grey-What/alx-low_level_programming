#include "lists.h"
/**
 * add_dnodeint_end - adds new node at end of doubly linked list
 *
 * @head: pointer to head pointer of linked list
 * @n: data of new node
 *
 * Return: adress of new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = (*head);
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		new->prev = NULL;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;

	return (new);
}
