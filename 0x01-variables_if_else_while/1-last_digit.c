#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Function returns whether a rand num is positive or negative */

/**
 * main - This function generates a random number
 * the tests if the number is zero, is greater than 5 or less than 6
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int n;
	int p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int p = n % 10;

	if (p == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, p);
	}
	else if (p > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, p);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}
	return (0);
}
