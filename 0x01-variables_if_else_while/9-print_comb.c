#include <stdio.h>
/**
* main - This program prints all possible combinations.
* Of single-digit numbers.
* Return:0 (successful)
*/
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 <= 9; digit1++)
{
for (digit2 = digit1; digit2 <= 9; digit2++)
{
putchar('0' + digit1);
putchar('0' + digit2);
if (digit1 != 9 || digit2 != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
