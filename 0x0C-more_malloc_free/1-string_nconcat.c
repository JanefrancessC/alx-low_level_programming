#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: no of bytes
 *Return: new memory allocated|| NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combine;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;

	combine = malloc(sizeof(char) * (len + 1));

	if (combine == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		combine[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		combine[len++] = s2[i];

	combine[len] = '\0';

	return (combine);


}
