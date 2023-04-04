#include "lists.h"

/**
 * print_listint - This will prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
num_nodes++;
h = h->next;
}
return (num_nodes);
}
