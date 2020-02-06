#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Function returns whether a rand num is positive or negative */

/**
 * main - This function generates a random number
 *  then tests if the number is larger or smaller than zero
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
