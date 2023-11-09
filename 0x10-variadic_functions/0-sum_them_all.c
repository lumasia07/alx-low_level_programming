#include "variadic_functions.h"

/**
 * sum_them_all - returns sumof all its params
 * @n: nuumber of args
 * Return: sum of params, else 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);

	return (sum);
}

