#include "main.h"

/**
 * more_numbers - prints 0-9 repeatedly
 * Return: void.
 */

void more_numbers(void)
{
	int c, counter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('1');
		_putchar('0' + c % 10);
		}
	_putchar('\n');
	}
}

