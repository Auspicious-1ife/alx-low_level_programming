#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 *
 * Return: A pointer to the concatenated string,
 * or NULL on failure
 */
char *argstostr(int ac, char **av)
{
char *concatenated;
int total_length = 0, i, j, k = 0;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++; /* Account for the newline character */
}
/* Allocate memory for the concatenated string */
concatenated = malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
/* Copy each argument followed by a newline character*/
 /* To the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[k] = av[i][j];
k++;
}
concatenated[k] = '\n';
k++;
}
concatenated[k] = '\0'; /* Adds a null terminator at the end */
return (concatenated);
}
