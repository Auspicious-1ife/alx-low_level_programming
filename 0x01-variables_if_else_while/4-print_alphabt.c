#include <stdio.h>
/**
* main - This program prints the alphabet in lowercase followed by a new line.
* Printis all the letters except q and e.
* Return:0 (successful)
*/
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase != 'q' && lowercase != 'e')
{
putchar(lowercase);
}
lowercase++;
}
putchar('\n');
return (0);
}
