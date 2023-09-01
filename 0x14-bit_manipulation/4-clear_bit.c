#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 **@n: pointer to given integer
 *@index: index to set to 0
 *Return: 1 (success) | -1 (fails)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
