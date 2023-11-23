#include "main.h"

/**
 * _raiseto - calculates (base to pow)
 * @b: base
 * @p: power
 * Return: value of base to pow
 */
unsigned long int _raiseto(unsigned int b, unsigned int p)
{
	unsigned int x;
	unsigned long int digit = 1;

	for (x = 0; x < p; x++)
	{
		digit *= b;
	}
	return (digit);
}

/**
 * print_binary - prints rep of a number
 * @n: number to printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift = _raiseto(2, sizeof(unsigned long int) * 8 - 1);
	char monitor = 0;

	while (shift > 0)
	{
		if ((n & shift) == shift)
		{
			monitor = 1;
			_putchar('1');
		}
		else if (monitor == 1 || shift == 1)
		{
			_putchar('0');
		}
		shift >>= 1;
	}
}
