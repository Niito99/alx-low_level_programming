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

	int term1;

	int term2;

	int next;

	int sum;

	scanf("%d", &n);
	term1 = 1;
	term2 = 2;
	next = term1 + term2;

	sum = 0;

	for (i = 0; i <= n; n++)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}
		term1 = term2;
		term2 = next;
		next = term1 + term2;
		printf("%d", sum);

	}
	return (sum);
}
