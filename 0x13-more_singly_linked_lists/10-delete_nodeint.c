#include "lists.h"
/**
 * delete_nodeint_at_index - finds and deletes node at index
 *
 * @head: pointer to head pointer
 * @index: index of node to be deleted
 *
 * Return: 1 on success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *hold = *head;
	listint_t *temp;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hold);
		return (-1);
	}

	while (i < index - 1)
	{
		if (!hold || !(hold->next))
			return (-1);

		hold = hold->next;
		i++;
	}
	temp = hold->next;
	hold->next = temp->next;
	free(temp);

	return (-1);
}
