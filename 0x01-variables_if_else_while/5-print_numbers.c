#include <stdio.h>
/**
*main - Prints single digits
*
*Return: Always 0.
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}