#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index in a listint_t.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node to delete, starting at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
for (i = 0; i < index - 1 && current->next != NULL; i++)
{
current = current->next;
}
if (i != index - 1 || current->next == NULL)
return (-1);
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
