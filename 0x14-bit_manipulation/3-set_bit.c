#include "main.h"

/**
 * set_bit - sets value of bit to 1 at index
 * @n: pointer to number
 * @index: where bit is to be set
 * Return: always 1, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	x = 1 << index;
	*n = *n | x;

	return (1);
}

