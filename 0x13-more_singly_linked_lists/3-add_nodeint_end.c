#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of linked list
 *
 * @head: pointer to head of linked list
 * @n: data to intialize element with
 *
 * Return: adress to new node, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *hold;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}
	hold = *head;

	while(hold->next)
	{
		hold = hold->next;
	}
	hold->next = new;

	return (new);
}
