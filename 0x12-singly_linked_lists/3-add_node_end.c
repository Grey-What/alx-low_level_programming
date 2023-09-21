#include "lists.h"
/**
 * add_node_end - creates and add new node at end of linked list
 *
 * @head: pointer to pointer to head of linked list
 * @str: string to be sotred in new list
 *
 * Return: adress of new node, else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new, *hold;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
/*check if list is empty and set head to point to new node if true*/
	if (!(*head))
	{
		*head = new;
		return (new);
	}
/*if list is not empty, create temp pointer to point to head*/
	hold = (*head);
/*traverse list and set head to point to next in link till end is reached*/
	while (hold->next)
	{
		hold = hold->next;
	}
/*set the last in list to point to new node*/
	hold->next = new;

	return (new);
}
