#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: pointer to given integer
 *@index: index to ste to 1
 *Return: 1 || -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
