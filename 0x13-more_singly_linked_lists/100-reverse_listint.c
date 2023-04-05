#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous = NULL;

	for (current = *head; current != NULL; current = current->next)
	{
		listint_t *next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;

	return (*head);
}
