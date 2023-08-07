#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * check - check if there is numbers in string
 *
 * @str: string of arguments/ numbers
 *
 * Return: 1 if there are number, 0 if non
 */
int check(char *str)
{
	unsigned long int counter;

	counter = 0;

	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/**
 * main - function adds two integers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if no numbers is passed , 1 and error if non positive values
 */
int main(int argc, char *argv[])
{
	int counter;
	int int_val;
	int adds = 0;

	counter = 1;

	while (counter < argc)
	{
		if (check(argv[counter]))
		{
			int_val = atoi(argv[counter]);
			adds = adds + int_val;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", adds);
	return (0);
}
