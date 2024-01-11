#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 on success
 */
int main(int __attribute((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int length = strlen(argv[1]), x, holder;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	holder = (length ^ 59) & 63;
	password[0] = codex[holder];

	holder = 0;
	for (x = 0; x < length; x++)
		holder += argv[1][x];
	password[2] = codex[(holder ^ 85) & 63];

	holder = 0;
	for (x = 0; x < length; x++)
	{
		if (argv[1][x] > holder)
			holder = argv[1][x];
	}
	srand(holder ^ 14);
	password[3] = codex[rand() & 63];

	holder = 0;
	for (x = 0; x < length; x++)
		holder += (argv[1][x] * argv[1][x]);
	password[4] = codex[(holder ^ 239) & 63];

	for (x = 0; x < argv[1][0]; x++)
		holder = rand();
	password[5] = codex[(holder ^ 229) & 63];

	password[6] = '\0';

	printf("%s", password);

	return (0);
}

