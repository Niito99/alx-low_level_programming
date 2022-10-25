#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to the linked list
 * @n: integer
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	int value = n;

	temp->n = value;
	temp->next = *head;
	temp = *head;
	return (temp);
}
