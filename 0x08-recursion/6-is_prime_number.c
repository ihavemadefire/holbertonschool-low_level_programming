#include "holberton.h"
/**
 *_ur - Recursively checks for primes
 *@x: Passed number to be tested
 *@y: Incrementing test cases; initialied at 2 from previous call
 * Return: 1 for prime, 0 for not prime
 */
int _ur(int x, int y)
{
	if (y == x) /*if at top of loop test == passed, no others are eq div*/
		return (1); /*is prime*/
	if (x % y == 0)/*if test == 0 is not prime*/
		return (0);
	return (_ur(x, y + 1));
}
/**
 * is_prime_number - handle edge cases then pass to rec func
 * @n: passed int
 * Return: return recursive function
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n == 0)
		return (0);
	if (n  < 1)
		return (0);
	return (_ur(n, 2));
}
