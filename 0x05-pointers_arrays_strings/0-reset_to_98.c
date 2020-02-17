#include <unistd.h>

/**
 * reset_to_98 - function that takes a pointer to an int as
 *      parameter and updates the value it points to to 98
 * @n: Passed pointer
 *
 */
void reset_to_98(int *n)
{
	int i = 98;
	*n = i;
}
