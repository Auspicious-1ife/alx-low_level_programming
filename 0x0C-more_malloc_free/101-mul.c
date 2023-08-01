#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - Checks if a string is a valid positive integer
 * @s: The string to check
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_digit(char *s)
{
if (*s == '\0')
return (0);
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return 98;
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
