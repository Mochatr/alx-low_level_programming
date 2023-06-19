#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to the struct variable to be initialized
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

/**
 * new_dog - Function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Pointer to the new dog
 * or Null if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	char *new_name, *new_owner;

	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);

		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	init_dog(new_dog, new_name, age, new_owner);
	return (new_dog);
}

