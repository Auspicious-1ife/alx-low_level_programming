#include <stdio.h>
/**
* main - This program prints the alphabet in lowercase.
* An uppercase and followed by a new line.
* Return:0 (successful)
*/
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
lowercase++;
}
putchar('\n');
return (0);
}
