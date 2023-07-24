#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - prints min num of coins for change
 *@argc: the number of arguments in the CL
 *@argv: an array of the CL args
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	cents = atoi(argv[1]);

	do {
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coin += 1;
	} while (cents > 0);

	printf("%d\n", coin);
	return (0);
}
