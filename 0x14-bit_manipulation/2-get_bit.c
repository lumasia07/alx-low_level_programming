#include "main.h"

/**
 * get_bit - returns value of given bit at a index
 * @index: index of bit
 * @n: number to be extracted
 * Return: value of bit, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;

	if (index >= sizeof(unsigned long int) * 8 - 1)
		return (-1);

	i = 1 << index;
	j = n & i;

	if (i == j)
	{
		return (1);
	}
	return (0);

}
