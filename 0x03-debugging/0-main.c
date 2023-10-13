#include "main.h"

/**
 * positive_or_negative - checks if number is positive or negative
 * @i: integer to be checked
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	i = 0;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
