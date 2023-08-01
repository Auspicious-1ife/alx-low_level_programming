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
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
