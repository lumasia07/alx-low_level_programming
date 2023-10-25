#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number to return factorial
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
