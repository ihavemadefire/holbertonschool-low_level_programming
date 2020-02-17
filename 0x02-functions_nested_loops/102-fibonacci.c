#include <stdio.h>
/**
 *main -  prints natural numbers
 *
 *Return: always returns 0.
 **/
void main(void)
{
	int i;
	long j = 1;
	long k = 2;
	long l;

	for (i = 1 ; i < 51 ; i++)
	{
		if (i < 50)
		{
			printf("%li, ", j);
			l = j + k;
			j = k;
			k = l;
		}
		else
		{
			printf("%li\n", j);
		}
	}
}
