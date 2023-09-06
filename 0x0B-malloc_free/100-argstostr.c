#include "main.h"
/**
 * argstostr - func concatenates all arguments of program
 *
 * @ac: number of arguments
 * @av: array of argument strings
 *
 * Return: NULL on failure or if ac = 0 or av = NULL, else pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, counter;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;

	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			j++;
			counter++;
		}
		i++;
	}
	counter = counter + ac + 1;

	str = malloc(sizeof(char) * counter);

	if (str == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
