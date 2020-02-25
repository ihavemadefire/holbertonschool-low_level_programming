#include "holberton.h"
#include "stdio.h"

/**
 * print_diagsums- sum diagonal values
 * @a: pointer to int type array
 * @size: size of array
 * Return: sum of two diagonals
 *
 */

void print_diagsums(int *a, int size)
{
	int x, y;
	int suml, sumr;

	suml = 0;
	sumr = 0;

	for (x = 0;  x < size; x++)
	{
		suml += a[(size + 1) * x];
	}
	for (y =  0; y < size; y++)
	{
		sumr += a[(size - 1) * (y + 1)];
	}
	printf("%d, %d\n",  suml, sumr);
}
