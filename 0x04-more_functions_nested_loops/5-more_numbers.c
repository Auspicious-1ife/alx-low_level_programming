#include "main.h"
/**
 * more_numbers - Prints the numbers from 0 to 14.
 * repeated 10 times, followed by a new line.
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar('0' + j);
}
_putchar('\n');
}
}
