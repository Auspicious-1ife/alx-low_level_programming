#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
op_t ops[] = {
    {"+", op_add},
    {"-", op_sub},
    {"*", op_mul},
    {"/", op_div},
    {"%", op_mod},
    {NULL, NULL}
};
int main(int argc, char **argv)
{
int digit1, digit2, result;
char *operator;
if (argc != 4)
{
printf("Usage: %s <digit1> <operator> <digit2>\n", argv[0]);
return (EXIT_FAILURE);
}
digit1 = atoi(argv[1]);
operator = argv[2];
digit2 = atoi(argv[3]);
if (*operator == '+')
{
result = op_add(digit1, digit2);
} 
else if (*operator == '-')
{
result = op_sub(digit1, digit2);
} 
else
{
if (*operator == '*')
{
result = op_mul(digit1, digit2);
} 
else if (*operator == '/')
{
result = op_div(digit1, digit2);
 } 
else if (*operator == '%')
{
result = op_mod(digit1, digit2);
} 
else
{
printf("Invalid operator: %s\n", operator);
return (EXIT_FAILURE);
}
}
printf("Result: %d\n", result);
return (EXIT_SUCCESS);
}
