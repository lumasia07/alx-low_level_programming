#include "function_pointers.h"
#include <stdlib.h>

/**
 * array-iterator - itrerates through an array
 * @array: array to be iterated
 * @size: size of array to be iterated
 * @action: pointer to func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
