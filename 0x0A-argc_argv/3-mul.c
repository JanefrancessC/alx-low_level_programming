#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the product of 2 integers passed
 *@argc: the number of arguments in the CL
 *@argv: an array of the CL args
 *Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
