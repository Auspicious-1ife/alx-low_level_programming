#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @array: pointer to the first element of the array to print
 * @low: starting index
 * @high: ending index
 */
void print_array(int *array, size_t low, size_t high)
{
    size_t i;

    printf("Searching in array: ");
    for (i = low; i <= high; i++)
    {
        printf("%d", array[i]);
        if (i < high)
            printf(", ");
    }
    printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if value is not
 * present or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low, high, mid;

    if (array == NULL)
        return (-1);

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        print_array(array, low, high);
        mid = (low + high) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}
