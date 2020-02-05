#include <stdio.h>

/**
 * main - Entry point
 * This program prints the various sizes of variables
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char is: %lu\n", (unsigned long)sizeof(c));
	printf("Size of an int is: %lu\n", (unsigned long)sizeof(i));
	printf("Size of a long is: %lu\n", (unsigned long)sizeof(l));
	printf("Size of a long long: %lu\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu\n", (unsigned long)sizeof(f));
	return (0);
}
