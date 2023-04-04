#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @h: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *h)
{
listint_t *dan;

for (dan = h; h != NULL; h = dan)
{
dan = h->next;
free(h);
}
}
