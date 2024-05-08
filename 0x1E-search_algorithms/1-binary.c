#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of ints
 * @array: pointer to the first element in the array to search
 * @size: number of elements in array
 * @value: target element
 * Return: (int) Target element
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, right, left, mid;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
