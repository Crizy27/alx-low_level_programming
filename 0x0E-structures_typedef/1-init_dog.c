#include "dog_h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The dog to be intialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d: != NULL)
	{
		d->name = name;
		d->name = age;
		d->owner = owner;
	}
}
