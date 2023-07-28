#include "main.h"
/**
 * cap_string - function capitalizes all words of a string
 *
 * @str: is the string of words
 *
 * Return: the string of apitalized words
 */
char *cap_string(char *str)
{
	int i = 0;
	char seps[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ',
			 '\n', '\t'};
	int j;

	while (str[i] != '\0')
	{
		j = 0;

		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		while (j < 13)
		{
			if (str[i] == seps[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}
	return (str);
}
