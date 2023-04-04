/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *current = *head, *next_node;

if (head == NULL || *head == NULL)
return (NULL);

for (; current != NULL; prev = current, current = next_node)
{
next_node = current->next;
current->next = prev;
}
*head = prev;
return (*head);
}
