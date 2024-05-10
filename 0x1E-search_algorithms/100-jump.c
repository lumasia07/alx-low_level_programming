#include "search_algos.h"

/**
 * min - returns min of two values
 * @a: first value
 * @b: second value
 * Return: a if lower or equal to b, b otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - searches for a value in a sorted array using Jump Search
 * @array: pointer to first element
 * @size: number of elements in the array
 * @value: target element
 * Return: index where target value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t small, big, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (big = 0; big < size && array[big] < value;
		small = big, big += step)
	{
		printf("Value checked array[%lu] = [%d]\n",
			big, array[big]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", small, big);

	for (; small <= min(small, size - 1); small++)
	{
		printf("Value checked array[%lu] = [%d]\n", small, array[small]);
		if (array[small] == value)
			return (small);
	}
	return (-1);
}
