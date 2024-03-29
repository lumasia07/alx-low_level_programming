#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to char
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
