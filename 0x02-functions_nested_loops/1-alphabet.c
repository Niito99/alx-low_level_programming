#include <unistd.h>

/**
 * print_alphabet - prints alphabets in lowercase
 * followed by a new line
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha++;
	}

	write(1, "\n", 1);

	return;
}
