#include "main.h"
/**
 * *_strcat - this function concatenates two strings
 *
 * @dest: this is the pointer to the first array
 * @src: this is the pointer to the second array
 *
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	if (dest[i] == '\0')
	{
		dest[i] = *src;
	}
	return (dest);
}
