#include <stdio.h>
/* This file prints the alphabet */

/**
 * main - prints 0 - 9 and a new line
 * using only putchar
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
