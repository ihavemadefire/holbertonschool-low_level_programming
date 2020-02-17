#include <stdio.h>
/**
 *main -  prints natural numbers
 *
 *Return: always returns 0.
**/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 1025 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d\n" , j);
	return (0);
}
