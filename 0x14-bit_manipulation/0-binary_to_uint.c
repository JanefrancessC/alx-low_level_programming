#include "main.h"

/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	unsigned int i;

	for (res = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			res = (res << 1) | 1;
		else if (b[i] == '0')
			res <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (res);
}
