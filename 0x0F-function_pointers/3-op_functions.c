#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -subs a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - muls a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divs a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_add - mods a and b
 * @a: 1st int
 * @b: 2nd int
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
