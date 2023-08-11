#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings and store in allocated space
 *
 * @s1: first string
 * @s2: second string
 * @n: number of character from s2 to be concatenated
 *
 * Return: pointer to newly allocated space containing concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int leng1 = 0;
	unsigned int leng2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1 && s1[leng1])
		leng1++;

	while (s2 && s2[leng2])
		leng2++;

	if (n >= leng2)
	{
		n = leng2;

		str = malloc(sizeof(char) * (leng1 + leng2 + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (leng1 + n + 1));
	}

	if (str == NULL)
		return (NULL);

	for (i = 0; i < leng1; i++)
		str[i] = s1[i];

	for (; i < (leng1 + n); i++)
		str[i] = s2[i - leng1];

	str[i] = '\0';


	return (str);
}
