#include "main.h"
/**
* print_alphabet - Prints 10 times the alphabet in lowercase.
* followed by a new line.
* Return: 0 (on successful execution)
*/
void print_alphabet_x10(void)
{
char num, letter;
for (num = 0; num <= 9; num++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
return (0);
}
