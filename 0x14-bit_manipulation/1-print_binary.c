#include "main.h"
#include <stdio.h>
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
putchar((int)((n & 1) + '0'));
}
