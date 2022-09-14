#include <unistd.h>
/**
 * print_alphabet_x10 - prints ten times the alphabets
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';

	int n = 1;

	while (n <= 10)
	{
		while (alpha <= 'z')
		{
			write(1, &alpha, 1);
			alpha++;
		}
		write(1, "\n", 1);
		n++;
		alpha = 'a';
	}
}
