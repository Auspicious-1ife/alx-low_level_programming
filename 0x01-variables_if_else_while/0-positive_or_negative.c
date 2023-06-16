#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - This program will assign a random number to the variable r.
* Return:0 (successful)
*/
int main(void)
{
int r;
srand(time(0));
r = rand() - RAND_MAX / 2;
printf("%d is ", r);
if (r > 0)
{
printf("positive");
}
else if (r < 0)
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
