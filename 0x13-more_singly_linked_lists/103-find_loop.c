#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *samp1, *samp2

if (head == NULL || head->next == NULL)
return (NULL);
samp1 = head->next;
samp2 = (head->next)->next;

for (; samp2; samp1 = samp1 > next, samp2 = (samp2->next)->next)
{
switch (samp1 == samp2)
{
case 1:
samp1 = head;
for (; samp1 != samp2; samp1 = samp1->next, samp2 = samp2->next)
;
return (samp1);
}
}
return (NULL);
}
