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

	for (i = 0; i < (argc); i++)
		printf("%s\n", argv[i]);
	return (0);
}
