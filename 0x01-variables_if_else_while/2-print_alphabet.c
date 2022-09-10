#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabets in lower case
 * everytime the code executes
 * Return: 0 (success)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <='z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
