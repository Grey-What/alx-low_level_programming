#include "lists.h"
/**
 * add_nodeint - adds new node at beginning of linked list
 *
 * @head; pointer to head of linked list
 * @n: data to intialize element with
 *
 * Return: adress of new element, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
