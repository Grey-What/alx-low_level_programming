#include "main.h"
/**
 * _strlen - determines length of a string
 *
 * @s: string
 *
 * Return: number of characters in string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings in newly allocated space in memory
 *
 * @s1: first string
 * @s2: second string
 * @n: number of chars of string s2 to be concatenated
 *
 * Return: pointer to new string, else NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	s3 = malloc(sizeof(char) * (len1 + n) + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s3[len1 + j] = s2[j];
	}
	s3[len1 + n + 1] = '\0';

	return (s3);
}
