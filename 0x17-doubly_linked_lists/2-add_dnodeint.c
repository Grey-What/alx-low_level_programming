#include "lists.h"
/**
 * add_dnodeint - function adds a new node at the start of a doubly list
 *
 * @head: pointer to head pointer of list
 * @n: dta of new node
 *
 * Return: adress of new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		exit(0);

	new->n = n;

	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;

	(*head) = new;
	return (new);
}
