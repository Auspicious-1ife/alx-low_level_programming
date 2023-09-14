#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point of the calculator program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description:
 * - Validates the number of command-line arguments.
 * - Converts the input numbers and operator,
 *   from strings to integers and characters.
 * - Checks if the operator is valid and handles division by zero cases.
 * - Calls the appropriate operation function based on the operator.
 * - Prints the result of the operation and returns an exit status.
 *
 * Return: 0 on success, or an error code (98, 99, or 100) on failure.
 */
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
