#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an integer array.
 * @array: A pointer to the integer array.
 * @size: The number of elements in the array.
 * @action: A function pointer to the action function.
 *
 * Description: This function iterates through the given integer array and
 * calls the specified action function on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
/* Check if 'array' and 'action' are not NULL before proceeding */
if (array != NULL && action != NULL)
{
size_t i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}
