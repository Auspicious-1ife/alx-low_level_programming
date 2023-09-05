#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * size: is the size of array
 * c:the char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array,or  NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
array = malloc(size * sizeof(char));
if (size == 0 || array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
