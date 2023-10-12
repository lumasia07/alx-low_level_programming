#include "main.h"

/**
 * print_most_numbers - function to print numbers between 0 and 9
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');

	return (0);
}
