#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	putchar(h);
	for (h = 'a'; h <= 'f'; h++)
	putchar(h);
	return (0);
}
