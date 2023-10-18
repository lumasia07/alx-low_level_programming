#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: pointer to integer to be reversed
 * @n: number of elements in the array;
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i--] = tmp;
	}
}

