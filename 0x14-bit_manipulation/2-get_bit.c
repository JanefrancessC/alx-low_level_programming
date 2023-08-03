#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: given integer
 *@index: index is the given n
 *Return: value of bit at index || -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
