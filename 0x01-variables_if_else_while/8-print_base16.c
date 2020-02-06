#include <stdio.h>
/* This file prints the hex letters and numbers*/

/**
 * main - the alphabet in revers and a new line
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
	for (i = 97 ; i < 103 ; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
