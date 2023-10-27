#include "main.h"
#include <stdio.h>

/**
 * main - prints name
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
