#include <stdio.h>
/* This file prints the alphabet */

/**
 * main - Loops through 41
 *  then tests if the number is larger or smaller than zero
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
