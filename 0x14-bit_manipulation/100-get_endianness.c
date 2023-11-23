#include "main.h"

/**
 * get_endianness - checks for the endianness
 * @void: takes no argument
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *p = (char *)&x;

	return (*p == 1 ? 1 : 0);
}
