#include "main.h"
/**
 * _memcpy - this function copies n bytes of memory from one area to another
 *
 * @dest: this is the memory area to be copied to
 * @src: this is the memory area to be copied
 * @n: this is the number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
