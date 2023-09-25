#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t count = 0;
size_t idx = 0;
const listint_t *hash_table[1024] = {NULL};
while (current != NULL)
{
if (current == hash_table[idx])
{
printf("-> [%p] %d\n", (void *)current, current->n);
exit(98);
}
printf("[%p] %d\n", (void *)current, current->n);
hash_table[idx] = current;
current = current->next;
count++;
idx = (size_t)current % 1024;
}
return (count);
}
