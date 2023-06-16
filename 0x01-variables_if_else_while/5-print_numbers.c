#include <stdio.h>
/**
* main - This program prints all single-digit numbers of base 10.
* starting from 0, followed by a new line.
* Return:0 (successful)
*/
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar('0' + number);
}
putchar('\n');
return (0);
}
