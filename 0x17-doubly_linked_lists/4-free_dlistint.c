#include "lists.h"
/**
 * free_dlistint - function frees a doubly linked list
 *
 * @head: head of linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
