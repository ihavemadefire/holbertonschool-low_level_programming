#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Returns number of coins needed to make change
 * @argc: Number of args - Should be validated to only 1 pv
 * @argv: Passed var for change to be returned
 * Return: 0 if no errors
 */

int main(int argc, char *argv[])
{
	int i, q, d, n, h, p, sum, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[1][i] ; i++)
	{
		if (!(isdigit(argv[1][i])))
		{
			printf("Error\n");
			return (1);
		}
	}
	change = (atoi(argv[1]));
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	q = (change / 25);
	change = (change % 25);
	d = (change / 10);
	change = (change % 10);
	n = (change / 5);
	change = (change % 5);
	h = (change / 2);
	change = (change % 2);
	p = change;
	sum = (q + d + n + h + p);
	printf("%d\n", sum);
	return (0);
}
