#include <stdio.h>
/* This file prints numbers*/

/**
 * main - prints all unique combos of numbers between
 * between 0 and 99 using putchar
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				putchar(10);
			}
			else
			{   putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}
