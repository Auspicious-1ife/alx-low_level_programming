#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
list_t *current, *temp;
current = head;
while (current != NULL)
{
free(current->str);
temp = current->next;
free(current);
current = temp;
}
head = NULL;
}
