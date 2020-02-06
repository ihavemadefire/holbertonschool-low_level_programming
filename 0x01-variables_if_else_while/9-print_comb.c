#include <stdio.h>
/* This file prints the single digit numbers*/

/**
 * main - prints single digit numbers in a
 * formatted list
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(10);
		}
	}
	return (0);

}
