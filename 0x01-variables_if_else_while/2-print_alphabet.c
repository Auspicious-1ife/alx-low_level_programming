#include <stdio.h>
/**
* main - This program prints the alphabet in lowercase followed by a new line.
* Return:0 (successful)
*/
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}
