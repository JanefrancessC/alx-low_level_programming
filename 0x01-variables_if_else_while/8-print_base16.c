#include <stdio.h>
/**
*main - Prints hexadecimals
*
*Return: Always 0.
*/

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
