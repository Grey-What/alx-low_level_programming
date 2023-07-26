#include "main.h"
/**
 * _strncat - this function concatenates two string
 *
 * @dest: first string
 * @src: second string
 * @n: number of elements in string two to be concatenated
 *
 * Return: pointer to result string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	count = i;

	while (src[j] != '\0' && j < n)
	{
		dest[count + j] = src[j];
		j++;
	}
	return (dest);
}
