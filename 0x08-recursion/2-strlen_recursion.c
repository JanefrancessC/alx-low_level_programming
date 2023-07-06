#include "main.h"

/**
 *_strlen_recursion - prints length of a string
 *@s: given string to be counted
 *Return: an int (string length)
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
