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
	int l;
	int m;
	char *result;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

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
	if (result == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < i; l++)
	{
		result[l] = s1[l];
	}
	for (m = 0; m < j; m++)
	{
		result[i + m] = s2[m];
	}
	return (result);

}
