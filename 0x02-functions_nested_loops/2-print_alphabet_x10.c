#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet.
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{

	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0;  j < 10; j++)
	{
		for (i = 0; i < 26; i++)
	{
		_putchar(c[i]);
	}
		_putchar(10);
	}
	return (0);
}
