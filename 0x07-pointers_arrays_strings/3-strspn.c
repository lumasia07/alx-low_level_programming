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
	int x, y, z, count;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		count = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z++;
				count = 1;
			}
		}
		if (count == 0)
		{
			return (z);
		}
	}
}
