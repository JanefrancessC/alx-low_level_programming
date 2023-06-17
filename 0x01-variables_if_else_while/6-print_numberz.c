#include <stdio.h>
/**
*main - Prints single digits using putchar
*
*Return: Always 0.
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num);

	putchar('\n');

	return (0);
}
