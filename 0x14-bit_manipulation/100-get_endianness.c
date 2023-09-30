#include "main.h"

/**
 * get_endianness - determines the system endianness
 *
 * Return: a char typecasted as an int
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)*c);
}
