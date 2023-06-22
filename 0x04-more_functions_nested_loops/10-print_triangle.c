#include <stdio.h>
/**
 * print_triangle - Prints a triangle of '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}
}
