#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the name of the function
 *@argc: not used in this function
 *@argv: list of passed arguments from the cl
 * Return: Always returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc  != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
