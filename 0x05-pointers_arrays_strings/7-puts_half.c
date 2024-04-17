#include "main.h"
#include <stdio.h>
/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int start_index = length / 2;
if (length % 2 != 0)
start_index++;
while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}
_putchar('\n');
}
