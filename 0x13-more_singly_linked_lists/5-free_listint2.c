#include "lists.h"
/**
 * free_listint2 - function frees a linked list
 *
 * @head: pointer to pointer to head of linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	(*head) = NULL;
}
