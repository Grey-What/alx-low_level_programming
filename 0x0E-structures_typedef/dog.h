#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains detail about a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 *
 * Description: this structure contains details about a dog , such as name of
 * owner, age and name of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
