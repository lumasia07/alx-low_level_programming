#include "main.h"

/**
 *print_line - function to draw straight line
 *@n: integer to be printed
 *Return: Always 0 (Success)
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
