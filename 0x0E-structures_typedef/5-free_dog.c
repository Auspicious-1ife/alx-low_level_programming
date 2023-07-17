
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
* Return: Always 0
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
/* Free the memory for the name and owner strings */
free(d->name);
free(d->owner);
/* Free the memory for the dog structure itself */
free(d);
}
