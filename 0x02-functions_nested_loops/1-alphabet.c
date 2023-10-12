#include "main.h"

/**
 * print_alphabet - function to print alphabet letters a to z
 * Return: Always 0 (Sucess)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
