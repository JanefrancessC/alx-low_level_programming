#include "main.h"

/**
 * _sqrt_recursion - check the code
 *@n: parameter to be squared
 * Return: value of the squared integer
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}


/**
 *_sqrt - calculates sqr root of 2 numbers
 *@x: tester number
 *@y: squared number
 *Return: squared number
 */

int _sqrt(int x, int y)
{
	if (x > (y / 2))
		return (-1);
	else if (x * x == y)
		return (x);

	return (_sqrt(x + 1, y));
}
