#include "lists.h"
/**
 * sum_listint - determines sum of all data in linked list
 *
 * @head: head of linked list
 *
 * Return: sum or if list is empty 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *hold = head;

	if (!hold)
		return (0);

	while (hold)
	{
		sum += hold->n;
		hold = hold->next;
	}
	return (sum);
}
