#include <stddef.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements (nodes) in the linked list.
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
/* Traverses the linked list and count the nodes*/
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
