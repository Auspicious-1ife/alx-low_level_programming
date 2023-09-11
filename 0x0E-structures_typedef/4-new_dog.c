#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name of the dog.
 *
 * Return: Pointer to the newly created dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
/* It allocate memory for the new dog structure */
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);
/* Allocate memory for the name and owner strings, and copy the data */
newDog->name = strdup(name);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->age = age;
newDog->owner = strdup(owner);
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
/* This returns the pointer to the newly created dog */
return (newDog);
}
