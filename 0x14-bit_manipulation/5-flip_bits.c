#include "main.h"

/**
 * _count - count number of set bits
 * @n: first number
 * Return: number of set bits
 */
unsigned int _count(unsigned long int n)
{
	unsigned int i = 0;

	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}

/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;

	return (_count(x));
}

