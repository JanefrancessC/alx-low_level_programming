#include "main.h"

/**
 *is_prime_number - Checks for prime numbers
 *@n: - integer to be checked
 *Return: 0 if false or 1 if true
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));

}

/**
 *is_prime - Checks for prime numbers
 *@n: - integer to be checked
 *@divisor: the divisor of n
 *Return: 0 if false or 1 if true
 */

int is_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	else if (n % divisor == 0)
		return (0);

	return (is_prime(n, divisor + 1));
}
