#include "main.h"
/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1
 */
int _putchar(char c);
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: The input string.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
