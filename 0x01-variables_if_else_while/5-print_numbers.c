#include <stdio.h>
/* This file prints the alphabet */

/**
 * main - prints 0 - p and a new line
 *
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
	}
	putchar(10);
	return (0);
}
