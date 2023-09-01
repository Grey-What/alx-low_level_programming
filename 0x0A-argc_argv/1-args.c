#include "main.h"
/**
 * main - this function prints the number of argumennts passed to it
 *
 * @argc: argumnet count
 * @argv: array of arguments
 *
 * Return: 0, always success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
