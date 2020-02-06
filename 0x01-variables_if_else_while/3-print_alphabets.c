#include <stdio.h>
/* This file prints the alphabet */

/**
 * main - prints out the lower and upercase alphabets using putchar
 *  and ascii codes
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
	i = 65;
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
