#include "main.h"
/**
 * _memset - fills n bytes of memory area pointed to with a constant character
 *
 * @s: this is the memory area being pointed too
 * @b: this is the constant character
 * @n: this is the number of bytes in storage to be filled
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
