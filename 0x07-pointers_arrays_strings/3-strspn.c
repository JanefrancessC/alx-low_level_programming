#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: initial segment
*@accept: the bytes to check
*Return: the number of bytes in the initial segment
*	of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAccept = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		isAccept = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				isAccept = 1;
				break;
			}
		}
		if (!isAccept)
		{
			return (count);
		}

		count++;
	}

	return (count);
}
