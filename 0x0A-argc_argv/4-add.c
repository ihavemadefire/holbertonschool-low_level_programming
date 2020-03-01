#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the name of the function
 *@argc: not used in this function
 *@argv: list of passed arguments from the cl
 * Return: Always returns 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += (atoi(argv[i]));
		for (j = 0; argv[i][j]; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
