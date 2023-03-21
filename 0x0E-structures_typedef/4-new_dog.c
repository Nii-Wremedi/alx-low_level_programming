#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: pointer to a string representing the name of the dog
 * @age: float representing the age of the dog
 * @owner: pointer to a string representing the owner of the dog
 * Return: pointer to the newly allocated dog_t structure, or NULL if
 * the allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* allocate memory for a new dog_t structure */
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* allocate memory for a new name string and copy the name */
	char *new_name = malloc(strlen(name) + 1);

	if (new_name == NULL)
	{
		/* free memory and return NULL if allocation fails */
		free(new_dog);
		return (NULL);
	}
	strcpy(new_name, name);

	/* allocate memory for a new owner string and copy the owner */
	char *new_owner = malloc(strlen(owner) + 1);

	if (new_owner == NULL)
	{
		/* free memory and return NULL if allocation fails */
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	/* initialize the new dog_t structure with the new name, age, and owner */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	/* return the newly allocated dog_t structure */
	return (new_dog);
}
