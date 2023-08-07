#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function prints the product of two numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 number of args is more then one, else return error and 1
 */
int main(int argc, char *argv[])
{
	int one, two;
	int sum = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);

		sum = one * two;

		printf("%d\n", sum);
	}
	return (0);
}
