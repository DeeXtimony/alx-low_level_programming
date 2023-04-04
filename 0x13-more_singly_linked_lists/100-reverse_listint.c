#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *further, *back;
if (head == NULL || *head == NULL)
return (NULL);
behind = NULL;
while ((*head)->next != NULL)
{
further  = (*head)->next;
(*head)->next = back;
back = *head;
*head = further;
}
(*head)->next = back;
return (*head);
}
