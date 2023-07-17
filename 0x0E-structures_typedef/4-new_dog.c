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
dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
newDog->name = strdup(name);
newDog->age = age;
newDog->owner = strdup(owner);
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);
}
return (newDog);
}
