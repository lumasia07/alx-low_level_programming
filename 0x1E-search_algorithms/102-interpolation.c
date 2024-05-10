#include "search_algos.h"

/**
 * interpolation_search - searches a value in a sorted array of ints
 * @array: pointer to first element
 * @size: number of elements in the array
 * @value: target element
 * Return: -1 if NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) &&
		 (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			 * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));
	printf("Value checked array [%lu] is out range\n", pos);
	return (-1);
}

