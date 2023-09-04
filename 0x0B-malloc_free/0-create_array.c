#include "main.h"
/**
 * create_array - function creates array of char and initializes it
 *
 * @size: size of array to be created
 * @c: character it should be intialized with
 *
 * Return: NULL if size is 0, else epointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
