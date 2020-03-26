#include "holberton.h"

/**
 * flip_bits - calculates the number of bits needed to change from n to m
 * @n: uns. long int to be flipped
 * @m: uns. long int to which to be flipped
 * Return: nuber of digitis to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int sum = 0;

	i = n ^ m; /*functions as a dif; diffs == 1*/
	while (i > 0)/*iterate across the number*/
	{
		sum += (i & 1); /*add 1 to sum if 1*/
		i >>=  1;/*iterator*/
	}
	return (sum);
}
