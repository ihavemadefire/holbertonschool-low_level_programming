#include <stdio.h>

int main(void)
{
	long n;
	int i;
	int j;

	n = 612852475143;
	i = 2;
	while (n!=1)
	{
		if (n % i == 0)
		{
			while (n % i ==0)
			{
				j = i;
				n=n/i;
			}
		}
		i++;
	}
	printf("%d \n", j);
	return (0);


}
