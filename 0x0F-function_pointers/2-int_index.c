#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - searches an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointr to func
 * Return: index of first element, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}

	return (-1);
}
