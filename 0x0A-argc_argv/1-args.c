#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed to program
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
