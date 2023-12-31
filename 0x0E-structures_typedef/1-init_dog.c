#include "dog.h"

/**
 *init_dog - intializes a struct type
 *@d: dog struct
 *@name: the name of the dog
 *@age: the dog's age
 *@owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		(*d).owner = owner;
	}
}
