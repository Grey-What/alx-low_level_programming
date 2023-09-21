#include "lists.h"
/**
 * add_node - function creates and adds a new node at beginning of linked list
 *
 * @head: pointer to pointer to head of list
 * @str: string to add store in element of new node
 *
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
