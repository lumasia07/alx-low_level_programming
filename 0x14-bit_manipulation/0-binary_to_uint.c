#include "main.h"

/**
 * binary_to_uint - converts binary to uint
 * @b: pointer to binary to be converted
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		converted = (converted << 1) + (b[i] - '0');
	}
	return (converted);
}
