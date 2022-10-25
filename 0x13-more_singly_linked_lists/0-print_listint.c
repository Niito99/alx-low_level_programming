#include "lists.h"
/**
 * print_listint - prints the items in a singly linked list
 * @h: pointer to the first node of the singly linked list
 * Return: the number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h->n != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
