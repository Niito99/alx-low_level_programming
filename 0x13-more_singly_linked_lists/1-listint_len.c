#include "lists.h"
/**
 * listint_len - finds the number of elements in a linked list
 * @h: pointer to a linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
