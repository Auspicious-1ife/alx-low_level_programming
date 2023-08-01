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
(void)argc;/*Ignore argc*/
printf("%s\n", argv[0]);
return (0);
}
