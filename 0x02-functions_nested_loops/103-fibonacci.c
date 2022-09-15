#include "main.h"
#include <stdlib.h>

/**
 * main - prints the sum of the even valued terms
 * Return: the sum of the terms
 */

int main(int n)
{
	long i = 0;
	long term1 = 1;
	long term2 = 2;
	long next = term1 + term2;

	int sum = 0;

	for (i = 0; i <= n; n++)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}
		term1 = term2;
		term2 = next;
		next = term1 + term2;
		printf("%ld", sum);

	}
	return (sum);
}
