#include "main.h"
/**
 * _strcat - this function concatenates two strings
 *
 * @dest: is the first string
 * @src: is thesecond string
 *
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	count = i;

	while (src[j] != '\0')
	{
		dest[count + j] = src[j];
		j++;
	}
	return (dest);
}
