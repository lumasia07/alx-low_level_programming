#include <unistd.h>

/**
 * _putchar - writes c to stout
 * @c: The character to print
 *
 * Return: On success 1
 * On erroe, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
