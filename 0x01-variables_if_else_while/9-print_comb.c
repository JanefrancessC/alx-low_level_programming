#include <stdio.h>
/**
*main - Prints possible single digit combinations
*
*Return: Always 0.
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		putchar((num != 9) ? ',' : '\n');

		if (num != 9)
		putchar(' ');
	}

	return (0);
}
