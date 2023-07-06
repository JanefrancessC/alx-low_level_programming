#include "main.h"

/**
 * _pow_recursion - prints the power of a given number
 *@x: number to be raised
 *@y: the exponential
 * Return: An intger of the calculation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
