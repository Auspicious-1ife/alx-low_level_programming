
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - This program will assign a random number to the variable n.
* Generates a random number and store it in n
* Return:0 (successful)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d \n", abs(n % 10));
if (n % 10 > 5)
{
printf("and is greater than 5\n");
}
else if (n < 0)
{
printf("and is less than 6 and not 0\n");
}
else
{
printf("and is 0\n");
}
printf("\n");
return (0);
}
