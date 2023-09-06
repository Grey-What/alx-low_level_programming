#include "main.h"
/**
 * main - program prints minimum number of coins to make change for an ammount
 * of money
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 1 on error, else 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num;
	int numofcoins;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
		printf("0\n");

	numofcoins = 0;

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			numofcoins++;
			num -= coins[i];
		}
	}
	printf("%d\n", numofcoins);
	return (0);
}
