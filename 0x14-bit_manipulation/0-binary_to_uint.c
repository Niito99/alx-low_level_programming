#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to decimal
 * @b: a string of chars of 0 or 1
 *
 * Return: decimal value of binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int decimal = 0;
	unsigned int i;
	int a;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			unsigned int result = 1;
			int power = (len - 1 - i);

			for (a = 0; a < power; a++)
			{
				result *= 2;
			}
			decimal += result;
		}
	}
	return (decimal);

}
