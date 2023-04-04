#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @h: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **h)
{
listint_t *samp;

switch (h == NULL)
{
case 0:
break;
default:
return;
}

for (; *h; *h = samp)
{
samp = (*h)->next;
free(*h);
}

*h = NULL;
}
