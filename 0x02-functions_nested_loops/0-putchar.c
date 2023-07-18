#include "main.h"
/**
 * main - this function prints '_putchar'
 *
 * Description: this function prints a sring with the _putchar() function
 * who's prototype is contained contained in main.h
 * @c: this return value of function _putchar is a character to be returned
 * after function is called
 *
 * Return: this function returns 0
 */
int _putchar(char c);

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
