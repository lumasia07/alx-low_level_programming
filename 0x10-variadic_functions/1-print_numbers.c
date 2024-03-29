#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: seaparator string
 * @n: number of integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}

	printf("\n");

	va_end(args);
}
