#include "main.h"

/**
  * swap_int - swaps the values of 2 pointers
  * @a: pointer to a
  * @b: pointer to b
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
