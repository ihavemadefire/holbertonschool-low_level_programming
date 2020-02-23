#include <stdio.h>
/**
 *main -  prints natural numbers
 *
 *Return: always returns 0.
 **/
int main(void)
{
	long j = 1;
	long k = 2;
	long l = 0;
	long m = 0;

	while (k < 40000000)
	{
		l = j + k;
		j = k;
		k = l;
		if (l % 2 ==0)
			m += l;
	}
	printf("%li\n", m);
	return (0);
}
