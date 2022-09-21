#include "main.h"

/**
 * rev_string - reverses a string
 * @s: passed char param
 * Return: void
 */

void rev_string(char *s)
{
	char x;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j <= i)
	{
		x = s[j];
		s[j] = s[i];
		s[i] = x;
		i--;
		j++;
	}
}
