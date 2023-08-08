#include <stdlib.h>
#include "main.h"
/**
 * create_array - function creates array of chars and is intialized with
 * specific char
 *
 * @size: is the size of array to be created
 * @c: is char it needs to be intialized with
 *
 * Return: NULL if size is 0, pointer to array if !NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;

		str = malloc(sizeof(char) * size);

		while (i < size)
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
}
