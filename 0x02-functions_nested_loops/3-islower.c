#include "main.h"

/**
*_islower - checks for lowercase characters
*@c - the parameter to be checke
*Return - 1 if true else 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z') 
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
