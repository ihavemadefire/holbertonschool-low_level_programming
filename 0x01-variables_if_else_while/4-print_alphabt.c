#include <stdio.h>
/* This file prints the alphabet */

/**
 * main - prints out the lowercae alphabets minus 'eq' using putchar
 *  and ascii codes
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
		if (i == 101)
		{
			i++;
		}
		else if (i == 113)
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	putchar(10);
	return (0);
}
