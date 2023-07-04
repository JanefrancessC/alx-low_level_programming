#include "main.h"

/**
 * _strchr - locates a character in string
 *@s: string to check
 *@c: charcter to return
 * Return: return *s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}
