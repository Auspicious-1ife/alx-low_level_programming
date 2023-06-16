#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - This program will assign a random number to the variable n.
* Return:0 (successful)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is ", n);
if (n > 0)
{
printf("positive");
}
else if (n < 0)
{
printf("negative");
}
else
{
printf("zero");
}
printf("\n");
return (0);
}
