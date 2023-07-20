#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *@array: array to iterate over
 *@size: size of array
 *@action: function pointer
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
