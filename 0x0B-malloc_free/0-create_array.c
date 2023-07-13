#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
array = malloc(size * sizeof(char));
if (size == 0 || array == NULL)
return NULL;
for (i = 0; i < size; i++)
array[i] = c;
return array;
}
