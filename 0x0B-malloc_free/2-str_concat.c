#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function concatenates two strings
 *
 * @s1: first string
 * @s2:second string
 *
 * Return: NULL on failure, pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, count, counter, k;
	char *nstr;

	count = 0;
	i = 0;
	counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}
	count = i;
	j = 0;

	while (s2[j])
	{
		j++;
	}
	counter = count + j + 1;

	nstr = (char *)malloc(sizeof(char) * counter);

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (k = 0; s1[k] != '\0'; k++)
		nstr[k] = s1[k];

	for (k = 0; s2[k] != '\0'; k++)
		nstr[count + k] = s2[k];

	nstr[count + k] = '\0';
	return (nstr);
}
