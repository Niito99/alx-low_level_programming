#include "main.h"
#include <stdlib.h>
/**
 * str_concat - adds two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *result;

	while (s1 != '\0')
	{
		i++;
	}
	while (s2 != '\0')
	{
		j++;
	}
	k = i + j;
	result = malloc(k * sizeof(char));

}
