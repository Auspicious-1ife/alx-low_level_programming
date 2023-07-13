#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the matrix.
 * @height: The height of the matrix.
 *
 * Return: A pointer to the allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **matrix;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
matrix = malloc(height * sizeof(int *));
if (matrix == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
matrix[i] = malloc(width * sizeof(int));
if (matrix[i] == NULL)
{
for (j = 0; j < i; j++)
free(matrix[j]);
free(matrix);
return (NULL);
}
for (j = 0; j < width; j++)
matrix[i][j] = 0;
}
return (matrix);
}
