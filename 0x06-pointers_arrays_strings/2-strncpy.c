#include "main.h"
/**
 * _strncpy - this function copies n elements of a string to another string
 *
 * @dest: is the string to be copied too
 * @src: is the string to be copied
 * @n: is the number of elements to be copied
 *
 * Return: this function returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
