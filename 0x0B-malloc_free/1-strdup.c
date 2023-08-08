#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - function allocated space in memory for newly duplicated string
 *
 * @str: string to be duplicated
 *
 * Return: NULL if str is null, else pointer to new string
 */
char *_strdup(char *str)
{
	int i;
	int leng = 0;
	char *ns;

	if (str == NULL)
		return (NULL);

	while (str[leng])
	{
		leng++;
	}

	ns = (char *)malloc(sizeof(char) * (leng + 1));

	if (ns == NULL)
		return (NULL);

	for (i = 0; i < leng; i++)
	{
		ns[i] = str[i];
	}
	return (ns);
}
