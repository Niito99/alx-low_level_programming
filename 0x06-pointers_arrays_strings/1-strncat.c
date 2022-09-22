#include "main.h"

/**
 * *_strncat - appends second string (at n bytes) to
 * the first string
 * @dest: first param pointer value
 * @src: pointer to the second string
 * @n: param reping the value of byte to append
 * Return: pointer value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j <= n -1)
	{
		dest[i] = src[j];
		i++;
		j++;

	}
	dest[i] = '\0';
	return (dest);
}
