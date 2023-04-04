Header file: lists.h

Structures:

struct listint_s
int n
struct listint_s *next
typedef struct listint_s listint_t
Functions:
0. Print list

size_t print_listint(const listint_t *h)
Prints all the elements of a listint_t linked list
Returns the number of nodes in the list
List length
size_t listint_len(const listint_t *h)
Returns the number of elements in a listint_t linked list
Add node
listint_t *add_nodeint(listint_t **head, const int n)
Adds a new node at the beginning of a listint_t linked list
If the function fails, returns NULL
Otherwise, returns the address of the new element
Add node at the end
listint_t *add_nodeint_end(listint_t **head, const int n)
Adds a new node at the end of a listint_t linked list
If the function fails, returns NULL
Otherwise, returns the address of the new element
Free list
void free_listint(listint_t *head)
Frees a listint_t linked list
Free
void free_listint2(listint_t **head)
Frees a listint_t linked list
Sets the head to NULL
Pop
int pop_listint(listint_t **head)
Deletes the head node of a listint_t linked list
If the linked list is empty, returns 0
Otherwise, returns the head node's data (n)
Get node at index
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
Locates a given node of a listint_t linked list
If the node does not exist, returns NULL
Otherwise, returns the located node
Sum list
int sum_listint(listint_t *head)
Returns the sum of all the data (n) of a listint_t linked list
If the linked list is empty, returns 0
Otherwise, returns the sum of all the data (n)
Insert
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
Inserts a new node to a listint_t linked list at a given position
If it is not possible to add the new node at index idx or the function fails, returns NULL
Otherwise, returns the address of the new node
Delete at index
int delete_nodeint_at_index(listint_t **head, unsigned int index)
Deletes the node at a given index of a listint_t linked list
If the function succeeds, returns 1
If the function fails, returns -1
Reverse list
listint_t *reverse_listint(listint_t **head)
Reverses a listint_t linked list using a maximum of one loop and two variables
Returns a pointer to the first node of the reversed list
Print (safe version)
size_t print_listint_safe(const listint_t *head)
Prints a listint_t linked list safely (i.e., can free lists containing loops)
Returns the number of nodes in the list
