#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets length of prefix substring
 * @s: pointer to string
 * @accept: pointer to reference bytes
 * Return: number of bytes in the initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y, z;

	while (*s)
	{
		y = 0;
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (*s == accept[z])
			{
				y = 1;
				break;
			}
		}
		if (!y)
		{
			break;
		}
		x++;
		s++;
	}
	return (x);
}
