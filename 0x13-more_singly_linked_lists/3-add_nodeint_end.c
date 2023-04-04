#include "lists.h"

/**
 * add_nodeint_end - will add a new node at the
 *                   end of a listint_t list.
 * @h: A pointer to the address of the
 *     head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
listint_t *new_node, *last_node;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*h == NULL)
*h = new_node;
else
{
for (last_node = *h; last_node->next != NULL; last_node = last_node->next)
continue;
last_node->next = new_node;
}
return (*h);
}
