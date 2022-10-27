#include "lists.h"
/** add_nodeint_end - adds a node to the end of a linked list
 * @head: the pointer to the linked list
 * @n: integer
 * Return: the address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new;

	ptr = malloc(sizeof(listint_t));
	new = malloc(sizeof(listint_t));

	if (ptr == NULL || new == NULL)
	{
		return (NULL);
	}

	ptr = *head;
	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
