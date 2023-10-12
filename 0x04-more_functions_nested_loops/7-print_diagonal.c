#include "main.h"

/**
 * print_diagonal - prints diagonal in terminal
 * @n: integer to be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
