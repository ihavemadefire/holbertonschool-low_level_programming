#include "holberton.h"
/**
 * print_last_digit - returns the last digit
 *
 * @r: is passed from main function
 *
 * Return: is 0 if zero, 1 if positive, -1 if negative.
 */
void jack_bauer(void)
{
        int i;
	int j;
      	for (i = 0; i < 24;i++)
	{
		for (j = 0; j <= 59 ; j++)
		{
			_putchar((i/10)+'0');
			_putchar((i%10)+'0');
			_putchar(':');
			_putchar((j/10)+'0');
			_putchar((j%10)+'0');
			_putchar(10);
		}
	}
}
