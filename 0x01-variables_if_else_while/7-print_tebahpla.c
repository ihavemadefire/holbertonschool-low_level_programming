#include <stdio.h>
/* This file prints the alphabet in reverse */

/**
 * main - the alphabet in revers and a new line
 * using only putchar
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i;

	for (i = 122 ; i > 96 ; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
