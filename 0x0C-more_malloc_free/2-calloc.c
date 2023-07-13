#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory to allocate
*
*Return: pointer of the memory block address
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			b[i] = 0;
		return (b);
	}
	else
		return (NULL);
}
