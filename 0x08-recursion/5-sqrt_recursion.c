#include "holberton.h"
/**
 *_babylon - Returns square root of natural numbers; -1 for all else
 *@x: Passed number to be sqrrted
 *@y: Incrementing test cases; initialied at 1 from previous call
 * Return: recursive loop to advance through test cases
 */
int _babylon(int x, int y)
{
	if (x == (y * y)) /*check to see if this test^2= original value*/
		return (y);
	if (y  * y  >  x)/*if test^2 we have exhauated possibilites*/
		return (-1);
	return (_babylon(x, y + 1));
}
/**
 * _sqrt_recursion - handle edge cases then pass to rec func
 * @n: passed int
 * Return: return success
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n  < 1)
		return (-1);
	return (_babylon(n, 1));
}
