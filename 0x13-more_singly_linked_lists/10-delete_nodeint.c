

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *samp, *curr = *head;
unsigned int node = 0;
if (curr == NULL)
return (-1);
switch (index)
{
case 0:
*head = (*head)->next;
free(curr);
return (1);
default:
while (node < index - 1)
{
if (curr->next == NULL)
return (-1);
curr = curr->next;
node++;
}
samp = curr->next;
curr->next = samp->next;
free(samp);
return (1);
}
}
