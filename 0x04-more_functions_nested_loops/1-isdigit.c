#include "main.h"

/**
 * _isdigit - function that checks for a digit between 0 and 9
 * @c: integer to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
