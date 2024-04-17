#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
int *array, i, size;
/* Check if min > max */
if (min > max)
return (NULL);
/* Calculate the size of the array */
size = max - min + 1;
/* Allocate memory for the array using malloc */
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
/* Initialize the array with values from min to max */
for (i = 0; i < size; i++)
array[i] = min++;
return (array);
}
