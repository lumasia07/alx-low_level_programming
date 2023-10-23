#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to be copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
