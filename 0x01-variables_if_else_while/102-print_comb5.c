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
	int k;
	int l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = j + 1 ; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 55 && j == 56 && k == 57)
					{
						putchar(10);
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	return (0);
}
