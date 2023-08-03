#include "main.h"

/**
 *flip_bit - returns the number of bits you would need to flip
 *@n: starting given integer
 *@m: final integer
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}
