#include <stdio.h>

/*
 * main - prints the alphabets in lowercase
 * and in uppercase
 * Return : 0 (success)
 */

int main(void)
{
	char ch;

	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}

	putchar('\n');

	return (0);

}
