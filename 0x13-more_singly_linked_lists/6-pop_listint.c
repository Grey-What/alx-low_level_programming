#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 *
 * @head: pointer to pointer to head node
 *
 * Return: 0 if linked list is empty, else data of node
 */
int pop_listint(listint_t **head)
{
	int n_num;
	listint_t *hold;

	if (!head || !(*head))
		return (0);

	hold = (*head)->next;
	n_num = (*head)->n;
	free(*head);
	*head = hold;

	return (n_num);
}
