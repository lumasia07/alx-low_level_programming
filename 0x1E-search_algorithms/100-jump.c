#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using Jump Search
 * @array: pointer to first element
 * @size: number of elements in the array
 * @value: target element
 * Return: index where target value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt((double)size);
	size_t back = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (step < size && array[step - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step - 1,
			array[step - 1]);
		back = step;
		step += sqrt(size);

		if (back >= size)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", back, step);

	for (i = back; i < step && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
