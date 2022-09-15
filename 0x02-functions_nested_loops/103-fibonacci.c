#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the sum of the even valued terms
 * Return: the sum of the terms
 */

int main(void)
{
	int n;

	int i;

	scanf("%d", &n);
	int term1 = 1;
	int term2 = 2;
	int next = term1 + term2;

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
