#include "lists.h"
/**
 * insert_nodeint_at_index - creates and add node at specified index in list
 *
 * @head: pointer to pointer to head of list
 * @idx: index to add new node
 * @n: data to intialize element of new node
 *
 * Return: NULL on failure else adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *hold = *head;

	if (!head || !(*head))
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (!new || !hold)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = hold->next;
		hold = new;
		return (new);
	}

	while (hold && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = hold->next;
			hold->next = new;
			return (new);
		}
		else
			hold = hold->next;
		i++;
	}
	return (NULL);
}
