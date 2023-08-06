#include <stdio.h>
#include "main.h"
/**
 * main - function prints a programs name
 *
 * @argc: number of arguments
 * @argv: pointer to array of string of argument
 *
 * Return: 0 if success, else anything else
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
