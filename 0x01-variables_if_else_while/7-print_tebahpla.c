#include <stdio.h>
/**
* main - This program prints the lowercase alphabet in reverse.
* followed by a new line.
* Return:0 (successful)
*/
int main(void)
{
char lowercase = 'z';
while (lowercase <= 'a')
{
putchar(lowercase);
lowercase++;
}
putchar('\n');
return (0);
}
