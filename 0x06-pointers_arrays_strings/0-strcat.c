#include "main.h"

/**
 * *_strcat - the function appends the second string to the first one
 * @dest: the first string is allocated to this variable
 * @src: the second string is allocated to this variable
 * Return: the pointer to the final value of dest after concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
