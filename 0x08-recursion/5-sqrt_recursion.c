#include "main.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: number to find square root
 * @x: given number
 * Return: square root of n;
 */
int _sqrt_init(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_sqrt_init(n, x + 1));
}

/**
 * _sqrt_recursion - return natural square root
 * @n: number to find square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_init(n, 1));
}
