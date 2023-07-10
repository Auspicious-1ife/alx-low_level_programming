
#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program.
 * @argv: the array that contains the arguments as strings.
 * @argc: number of command-line arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;/*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
