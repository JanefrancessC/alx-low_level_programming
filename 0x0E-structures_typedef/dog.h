#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 *struct dog - provide a dog description
 *@name: dog name
 *@age: dog age
 *@owner: the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
