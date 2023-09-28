#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointing to a string of 0 and 1 chars
 *Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, i;

	for (result = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			result = (result << 1) | 1;
		if (b[i] == '0')
			result = result << 1;
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (result);
}
