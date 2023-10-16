#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - genarates random passwords
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int n, x, sum;

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		sum += (pass[x] + '0');
		putchar(pass[x] + '0');

		if ((2772 - sum) < 78)
		{
			n = 2772 - sum;
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	putchar('\n');
	
	return (0);
}
