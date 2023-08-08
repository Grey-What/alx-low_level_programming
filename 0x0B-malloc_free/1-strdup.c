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
	long unsigned int i;
	char *ns;

	if (str == NULL)
		return (NULL);
	else
	{
		ns = (char *)malloc(sizeof(str));

		if (ns == 0)
			return (NULL);

		for (i = 0; i < sizeof(ns); i++)
		{
			ns[i] = str[i];
		}
	}
	return (ns);
}
