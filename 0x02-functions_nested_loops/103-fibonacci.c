#include <stdio.h>
/**
 *main -  prints natural numbers
 *
 *Return: always returns 0.
 **/
int main(void)
{
	long j = 0;
	long k = 1;
	long l = 0;
	long m = 0;

	while (k < 4000000)
	{
		l = j + k;
		j = k;
		k = l;
		if (l % 2 == 0)
			m += l;
	}
	printf("%li\n", m);
	return (0);
}
