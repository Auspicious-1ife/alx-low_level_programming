#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the addition operation.
 */
int op_add(int a, int b)
{
int sum = a + b;
return (sum);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the subtraction operation.
 */
int op_sub(int a, int b)
{
int difference = a - b;
return (difference);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the multiplication operation.
 */
int op_mul(int a, int b)
{
int product = a * b;
return (product);
}
/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of the division operation.
 */
int op_div(int a, int b)
{
int result;
if (b == 0)
{
printf("Error: Division by zero\n");
exit (EXIT_FAILURE);
}
result = a / b;
return (result);
}
/**
 * op_mod - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The remainder of the division operation.
 */
int op_mod(int a, int b)
{
int remainder;
if (b == 0)
{
printf("Error: Modulo by zero\n");
exit(EXIT_FAILURE);
}
remainder = a % b;
return (remainder);
}
