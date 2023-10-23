#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to constant byte
 * @b: constant byte to fill memory
 * @n: number of bytes of b to be filled in memory
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
