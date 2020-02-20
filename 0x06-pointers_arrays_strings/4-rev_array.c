#include "holberton.h"
/**
 *reverse_array - returns a concatednated char pointer
 *@a: passed pointer to be compared
 *@n: passed pointer to be compared
 *
 *
 *Return: copied string
 */

void reverse_array(int *a, int n)
{

	int i;
	int tmp, *beg, *end;

	beg = a;
	end = a;

	for (i = 0; i < n - 1; i++)
		end++;

	for (i = 0; i < n / 2 ; i++)
	{
		tmp = *end;
		*end = *beg;
		*beg = tmp;
		beg++;
		end--;
	}
}
