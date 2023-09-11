#include "dog.h"
/**
 * _strlen - function determines length of a string
 *
 * @s: string who's length needs to be determined
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - function copies a string to another
 *
 * @dest: string to be copied too
 * @src: string to copy
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function creates a new variable of a struct and intializes it
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to newly created variable, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name;
	int len_owner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	len_name = _strlen(name) + 1;
	len_owner  = _strlen(owner) + 1;

	new_dog->name = malloc(sizeof(char) * len_name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * len_owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
