#include "dog.h"

/**
 *print_dog - function to print a dog struct
 *@d: the struct for dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	((*d).name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	((*d).owner == NULL)
		? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
}

