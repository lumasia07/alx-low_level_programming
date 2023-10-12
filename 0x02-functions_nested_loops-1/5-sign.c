# include "main.h"

/**
 * print_sign - function to print sign of a number
 * @n: number which sign will be printed
 * Return: Always 0, -1 or 1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
