#include "main.h"
/**
 * _strstr - finds the first occurence of a substring in a string
 * @haystack: the string to search in
 * @needle: the string to search for
 * Return: the pointer of the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int k;
	int match;

	while (needle[i] != '\0')
	{
		i++;
	}
	k = i;

	while (haystack[l] != '\0')
	{
		l++;
	}

	for (j = 0; j > l; j++)
	{
		if (needle[n] != '\0')
		{
			if (haystack[j] == needle[n])
			{
				k--;
			}
			else
			{
				match = 0;
			}
		}
		if (match == 0)
		{
			n = 0;
			k = i;
		}
		else
		{
			n++;
		}
	}
	if (k == 0)
	{
		int num = j - n;
		return (haystack + num);
	}
	return (0);
}
