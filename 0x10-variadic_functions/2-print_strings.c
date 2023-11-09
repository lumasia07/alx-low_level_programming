#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: number of strings to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *s;

	va_start(args, n);

	while (i < n)
	{
		s = va_arg(args, const char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}

	printf("\n");

	va_end(args);
}
