#include <unistd.h>
#include <string.h>

/**
 * main - prints outs a string literal
 * Description: prints outs a string to stdout without printf and puts
 *
 * Return: the integer 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	int len = strlen(str);
	write(1, str, len);

	return (1);
}
