#include "main.h"

/**
 * is_palindrome - returns 1 if string is palindrome
 * @s: pointer to string to be checked
 * Return: 1 if string id palindrome
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = len(s);

	if (!(*s))
		return (1);

	return (check(s, l, i));
}

/**
 * len - checks string length
 * @s: string to measure
 * Return: length of string
 */
int len(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += len(s + l);
	}

	return (l);
}

/**
 * check - checks if string is palindrome
 * @s: string to be checked
 * @l: length of s
 * @i: index of string to be checked
 * Return: 1 if palindrome, 0 otherwise
 */
int check(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);

	if (s[i] == s[l - i - 1])
		return (check(s, l, i + 1));

	return (0);
}
