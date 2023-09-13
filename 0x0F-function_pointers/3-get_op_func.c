#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Selects the correct operation function,
 * based on an operator string.
 * @s: A pointer to a character string representing the operator.
 *
 * Return: A pointer to the corresponding operation function.
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s && s[1] == '\0')
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
