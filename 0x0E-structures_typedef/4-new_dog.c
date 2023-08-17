#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - determines length of a string
 *
 * @str: string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copy one string to another
 *
 * @dest: string to be copied too
 * @src: string to be copied
 *
 * Return: newly copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i, leng;

	leng = 0;

	while (src[leng] != '\0')
		leng++;

	for (i = 0; i < leng; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new variable of struct dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: new variable of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1, leng2;

	leng1 = _strlen(name);
	leng2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(int) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
