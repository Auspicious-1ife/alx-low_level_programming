#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
int main(int argc, char *argv[])
{
int digit1, digit2, result;
char *operator;
if (argc != 4)
{
printf("Error\n");
return (98);
}
digit1 = atoi(argv[1]);
operator = argv[2];
digit2 = atoi(argv[3]);
if (get_op_func(operator) == NULL)
{
printf("Error\n");
return (99);
}
if ((*operator == '/' || *operator == '%') && digit2 == 0)
{
printf("Error\n");
return (100);
}
result = get_op_func(operator)(digit1, digit2);
printf("%d\n", result);
return (0);
}
