#include "main.h"

/**
 *_memcpy - copies from a memory to another memory area
 *@src: memory area to be copied
 *@dest: memory area to be filled
 *@n: number of times to fill
 *Return: - a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}

	return (dest);
}
