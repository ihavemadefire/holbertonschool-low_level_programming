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

	printf("The size of a char is: %lu\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu\n", (unsigned long)sizeof(i));
	printf("The size of a long is: %lu\n", (unsigned long)sizeof(l));
	printf("The size of a long long: %lu\n", (unsigned long)sizeof(ll));
	printf("The size of a long long: %lu\n", (unsigned long)sizeof(f));
	return (0);
}
