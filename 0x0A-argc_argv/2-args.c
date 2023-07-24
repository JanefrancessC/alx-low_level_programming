#include <stdio.h>

/**
 *main - prints the arguments passed
 *@argc: the number of arguments in the CL
 *@argv: an array of the CL args
 *Return: 0
 */

int main(int argc, char **argv)
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
