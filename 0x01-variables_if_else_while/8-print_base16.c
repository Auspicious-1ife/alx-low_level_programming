#include <stdio.h>
/**
* main - This program prints all the numbers of base 16 in lowercase.
* followed by a new line.
* Return:0 (successful)
*/
int main(void)
{
int number;
for (number = 0; number <= 15; number++)
{
if (number < 10)
{
putchar('0' + number);
}
else
{
putchar('a' + (number - 10));
}
}
putchar('\n');
return (0);
}
