#include "main.h"

/**
 * is_prime - checks if a given number is an integer
 * @n: number to checked
 * @x: given divisor
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime(int n, int x)
{
	if (x <= 1)
		return (1);
	if (n % x == 0)
		return (0);

	return (is_prime(n, x - 1));
}

/**
 * is_prime_number - checks a prime number
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime(n, n / 2));
}
