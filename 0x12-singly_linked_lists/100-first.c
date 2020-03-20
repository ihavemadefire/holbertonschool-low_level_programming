#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * tortoise_hare - prints line before main runs
 */
void tortoise_hare(void) __attribute__ ((constructor));

void tortoise_hare(void)
{
printf
("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
