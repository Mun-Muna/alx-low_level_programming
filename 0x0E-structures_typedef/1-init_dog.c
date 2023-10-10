#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: type struct dog
 * @name: type char *
 * @age: type float
 * @owner: type char *
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
