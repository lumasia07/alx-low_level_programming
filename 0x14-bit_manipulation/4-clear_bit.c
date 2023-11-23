#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @index: where to add 0
 * @n: number to be added
 * Return: always 1, -1 othwerwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	x = ~(1 << index);
	*n = *n & x;

	return (1);
}
