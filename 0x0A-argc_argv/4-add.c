#include <stdio.h>
#include <stdlib.h>
/**
 * is_positive_number - checks if a string represents a positive number
 * @str: the input string
 *
 * Return: 1 if str represents a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{	
int i = 0;
while (str[i] != '\0')
{
if (!(str[i] >= '0' && str[i] <= '9'))
return (0);
i++;
}
return (1);
}
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
int num = atoi(argv[i]);
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
