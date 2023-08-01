#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data = 0;
if (head == NULL || *head == NULL)
return (data);
temp = *head;
data = (*head)->n;
*head = (*head)->next;
free(temp);
return (data);
}
