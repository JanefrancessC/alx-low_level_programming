#include <stdio.h>

/**
 *main - prints the number of arguments passed
 *@argc: the number of arguments in the CL
 *@argv: an array of the CL args
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
