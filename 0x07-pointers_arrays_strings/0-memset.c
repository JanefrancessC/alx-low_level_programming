#include "main.h"

/**
 *_memset - fills the memory with a constant b
 *@s: pointer to memory to be filled
 *@b: constant value to be used
 *@n: number of times to fill
 *Return: - a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}

