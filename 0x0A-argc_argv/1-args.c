#include <stdio.h>
/**
 * main - Prints the name of the function
 *@argc: not used in this function
 *@argv: list of passed arguments from the cl
 * Return: Always returns 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
