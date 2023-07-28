#include "main.h"
/**
 * leet - this function replaces certain letters with specific numbers
 *
 * @s: this is the string to be assessed
 *
 * Return: new string with numbers
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char num[5] = {"43071"};
	char lets[5] = {"aeotl"};

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 5)
		{
			if (s[i] == lets[j] || s[i] == lets[j] - 32)
			{
				s[i] = num[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
