#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: array to br iterated
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;

		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}

}
