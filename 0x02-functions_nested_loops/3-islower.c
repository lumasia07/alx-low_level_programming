#include "main.h"

/**
 *_islower - function to check for a lowercase character
 *@c: Character to be checked
 *Return: Always 1, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

