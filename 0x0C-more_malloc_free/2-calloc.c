#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for array and intializes values to zero
 *
 * @nmemb: number of elements
 * @size: number of bytes per element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (s);
}
