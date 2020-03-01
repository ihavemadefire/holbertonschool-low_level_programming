#include <stdio.h>
/**
 * main - Prints the name of the function
 *@argc: not used in this function
 *@argv: list of passed arguments from the cl
 * Return: Always returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
