#include "main.h"
/**
 * str_len - determines length of string
 *
 * @s: string
 *
 * Return: int length of string
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - func concatenates two string in newly allocated memory
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string in memory, else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = str_len(s1);
	len2 = str_len(s2);

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		p[len1 + j] = s2[j];
	}

	p[len1 + len2 + 1] = '\0';

	return (p);
}
