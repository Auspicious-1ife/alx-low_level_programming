#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog to be printed
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
/* Print name, if not NULL, or "(nil)" otherwise */
printf("Name: %s\n", d->name ? d->name : "(nil)");
/* Print age */
printf("Age: %.6f\n", d->age);
/* Print owner, if not NULL, or "(nil)" otherwise */
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
