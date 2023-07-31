#include "main.h"
#include <stdio.h>
/**
 * _strchr - this function finds the first occurance of a specified character
 * in a string
 *
 * @s: this is the string to be searched
 * @c: this is the character to be found
 *
 * Return: pointer to first occurance of c otherwise returns NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
