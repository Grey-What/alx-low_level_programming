#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - this function locates first occurence of second string in first
 * string
 *
 * @s: first string to be searched
 * @accept: string of characters to be searched for
 *
 * Return: pointer to first occurence or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
