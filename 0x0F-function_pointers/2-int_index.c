#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: A pointer to the integer array.
 * @size: The number of elements in the array.
 * @cmp: A function pointer to the comparison function.
 *
 * Description: This function iterates through the given integer array and
 * calls the specified comparison function on each element to find a match.
 *
 * Return: The index of the first matching element if found, -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
