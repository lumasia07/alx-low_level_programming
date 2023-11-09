#include "variadic_functions.h"

/**
 * print_all - prints any character
 * @format: format of char to be printed
 */
void print_all(const char * const format, ...)
{
	va_list pr;
	char *s;
	unsigned int i = 0;
	
	va_start(pr, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pr, int));
				break;
			case 'i':
				printf("%d", va_arg(pr, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(pr, double));
				break;
			case 's':
				s = va_arg(pr, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				else
				{
					printf("%s", s);
					break;
				}
			default:
				i++;
				continue;
		}

		if (format[i + 1])
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(pr);
}
