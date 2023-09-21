#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all elements of a list_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Description: This function traverses a linked list and prints the content of
 * each node. It also counts and returns the total number of nodes in the list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%lu] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
count++;
h = h->next;
}
return (count);
}
