#include <stdio.h>
/**
* main - This program prints all possible combinations.
* Of single-digit numbers.
* Return:0 (successful)
*/
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
