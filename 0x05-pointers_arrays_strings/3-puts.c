#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer to vhar
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}

	_puts('\n');
}
