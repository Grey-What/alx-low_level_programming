#include "main.h"
/**
 * _strdup - function duplicates a string in a newly allocated space in memory
 *
 * @str: string to be duplicated
 *
 * Return: pinter to new string , else NULL
 */
char *_strdup(char *str)
{
	int len = 0;
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';

	return (p);
}
