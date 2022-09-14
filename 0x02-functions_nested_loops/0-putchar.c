#include <unistd.h>
#include "main.h"

/**
 * main - prints the string _putchar followed by a newline
 * Return: Always 0 (success)
 */

int main(void)
{
	write(1, "_putchar\n", 9);

	return (0);
}
