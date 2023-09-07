#include "main.h"
/**
 * _memset: initializes memory with specified char in specified numbr of space
 *
 * @ptr: pointer to memory
 * @c: character to initialize with
 * @n: number of space that needs to be initialized
 *
 * Return: pointer to initialized space
 */
void *_memset(char *ptr, int c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr[i] = c;

	return (ptr);
}
/**
 * _calloc - function allocates memory for array, and initialize memory
 *
 * @nmemb: number of elements
 * @size: siz eof a element
 *
 * Return: NULL if nmemb or size is 0; NULL on fail, else pointer to allocated
 * and initialized space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
