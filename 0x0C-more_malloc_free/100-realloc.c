#include "main.h"
/**
 * _realloc - func reallocates a memory block using malloc and free
 *
 * @ptr: previous allocated memory block
 * @old_size: previous size in byte of allocated space
 * @new_size: new size in byte of new allocated memory block
 *
 * Return: NULL if new_size is 0 and/or ptr not NUll, and on fail, else pointer
 * pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *prev_ptr;
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	prev_ptr = ptr;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = prev_ptr[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = prev_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
