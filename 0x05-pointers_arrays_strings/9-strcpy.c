#include "main.h"
/**
 * _strcpy - function copies a string
 *
 * @dest: copied string
 * @src: original string
 *
 * Return: pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
