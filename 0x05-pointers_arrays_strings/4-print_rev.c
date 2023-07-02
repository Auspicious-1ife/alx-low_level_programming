#include "main"
/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
return (putchar(c));
}
/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
int length = 0;
int i;
/* Calculate the length of the string */
while (s[length] != '\0')
length++;
/* Print the characters in reverse order */
for (i = length - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
