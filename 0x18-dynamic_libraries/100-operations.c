#include "stdio.h"

/**
 * add - adds a and b
 * @a: integer a
 * @b: integer b
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subs a and b
 * @a: integer a
 * @b: integer b
 * Return: subs
 */
int sub(int a, int b)
{
        return (a - b);
}

/**
 * mul - mul a and b
 * @a: integer a
 * @b: integer b
 * Return: sub 
 */
int mul(int a, int b)
{
        return (a * b);
}

/**
 * div - divs a and b
 * @a: integer a
 * @b: integer b
 * Return: divs
 */
int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
        return (a / b);
}

/**
 * mod - mods a and b
 * @a: integer a
 * @b: integer b
 * Return: mods
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
        return (a % b);
}

