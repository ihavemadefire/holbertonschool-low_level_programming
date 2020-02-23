#include <unistd.h>
/**
 *main - prints text without using write
 *Return: always returns 1
 */
int main(void)
{
	char q[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	(write(2, q, 60));

	return (1);
}
