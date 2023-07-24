#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds positive integers passed
 *@argc: the number of arguments in the CL
 *@argv: an array of the CL args
 *Return: 0
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
