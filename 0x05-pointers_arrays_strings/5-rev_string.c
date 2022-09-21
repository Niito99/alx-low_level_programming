#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: passed char param
 * Return: void
 */

void rev_string(char *s)
{
	int i = strlen(s) - 1;
	int j = 0;

	while (s[i])
	{
		*(s + j) = s[i];
		i--;
		j++;
	}
}
