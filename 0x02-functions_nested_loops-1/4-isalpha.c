#include "main.h"

/**
 *_isalpha - function that checks alphabetic characters
 *@c: character to be checked
 *Return: Always 1, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
