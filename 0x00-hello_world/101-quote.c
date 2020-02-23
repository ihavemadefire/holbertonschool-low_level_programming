#include <unistd.h>
/**
 *main - prints text without using write
 *Return: always returns 1
 */
int main(void)
{
int i;
i = 59;
(write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", i));
return (1);
}
