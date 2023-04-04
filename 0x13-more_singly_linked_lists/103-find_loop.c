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
listint_t *tortoise, *hare;

if (head == NULL || head->next == NULL)
return (NULL);


tortoise = head->next;
hare = (head->next)->next;

for (; hare; tortoise = tortoise->next, hare = (hare->next)->next)
{

switch (tortoise == hare)
{

case 1:
tortoise = head;
for (; tortoise != hare; tortoise = tortoise->next, hare = hare->next)
;
return (tortoise);
}
}
return (NULL);
}
