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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
