#include "main.h"

/**
  *_strlen - returns length of string
  *@s: pointer to s
  *Return: string length, an int type
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

