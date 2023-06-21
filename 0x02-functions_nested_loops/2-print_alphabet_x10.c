#include "main.h"

/**
 *main - print_alphabet x10
 *Return void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int count = 0;

	while (count <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		count++;
	}
}
