#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - prints an array of numbers
 * @max: maximum integer
 * @min: minimum integer
 * Return: Pointer to new arrays, NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr_int;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr_int = malloc(size * sizeof(int));

	if (arr_int == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		arr_int[x] = min + x;
	}

	return (arr_int);
}
