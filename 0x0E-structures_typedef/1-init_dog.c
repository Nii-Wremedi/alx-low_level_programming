#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: pointer to struct dog
 * @name: pointer to name
 * @age: age of dog
 * @owner: pointer to owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
