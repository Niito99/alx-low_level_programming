#include "main.h"
/**
 * _strstr - finds the first occurence of a substring in a string
 * @haystack: the string to search in
 * @needle: the string to search for
 * Return: the pointer of the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0; haystack[i]; i++)
	{
		for (k = i, j = 0; needle[j] != '\0'; j++, k++)
		{
			if (haystack[k] != needle[j] || haystack[k] == '\0')
			{
				break;
			}
		}
		if (needle[j] == 0)
		{
			return (haystack + i);
		}
	}
	return (0);
}
