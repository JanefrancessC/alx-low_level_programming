#include "main.h"

/**
  *print_rev - prints a reverse strin
  *@s: pointer to s
  *Return: void
  */

void print_rev(char *s)
{
	int counter;
	int j = 0;

	while (*s != '\0')
	{
		s++;
		j++;
	}
	s--;
	for (counter = j; counter > 0; counter--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
