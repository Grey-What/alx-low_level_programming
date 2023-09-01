#include "main.h"
/**
 * main - function prints all arguments received, each on a new line
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0, always success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
