#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first task
 * @b: pointer to second task
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
