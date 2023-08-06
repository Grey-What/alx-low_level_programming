#include "main.h"
/**
 * _strcmp - this function compares two strings
 *
 * @s1: is the first string
 * @s2: is the second string
 *
 * Return: 0 if string is equal, >0 if s1 char is larger in ascii value then
 * char in s2, <0 if ascii value is less than that of char in s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
