#include "main.h"

/**
 *factorial - calculates the fatorial of a num
 *@n: integer to work on
 *Return: an integer (factorial on n)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
