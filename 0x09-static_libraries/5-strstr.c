#include "main.h"
#include <stdio.h>
/**
 * _strstr - function searched for first occurence of substring in string
 *
 * @haystack: this is the first string that will be searched
 * @needle: this is the substring that the first occurence will be searched for
 *
 * Return: pointer to first occurence of substring, else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
