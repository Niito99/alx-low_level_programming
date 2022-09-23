#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: the first string parameter
 * @s2: the second string parameter
 * Return: 0 if strings are equal but >0 if the first
 * non matching character in str1 is greater in ASCII
 * than the first in s2. and <0 if otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	int result = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		result = 0;
	}
	else
	{
		result = s1[i] - s2[i];
	}
	return (result);
}
