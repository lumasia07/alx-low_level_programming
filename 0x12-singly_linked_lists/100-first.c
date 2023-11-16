#include "lists.h"

void _before(void) __attribute__ ((constructor));

/**
 * _before - prints before main function
 */
void _before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

