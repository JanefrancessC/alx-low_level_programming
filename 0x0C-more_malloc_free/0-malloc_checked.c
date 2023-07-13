#include "main.h"
#include <stdlib.h>

/**
 **malloc_checked - Prints pointer to the allocated memory
 *@b: int for memory allocation
 *Return: 98 if allocation fails
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
