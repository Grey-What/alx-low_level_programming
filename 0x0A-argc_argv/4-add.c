#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * is_num - check if argument is a positive number
 *
 * @s: string argument
 *
 * Return: always 0
 */
int is_num(char *s)
{
	unsigned int i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - function adds positive numbers
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success, else 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;
	int hold_num;

	if (argc == 0)
		printf("0\n");

	else
	{
		while (i < argc)
		{
			if (is_num(argv[i]) == 1)
			{
				hold_num = atoi(argv[i]);
				sum = sum + hold_num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
