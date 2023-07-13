#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL.
 */
char *_strdup(char *str)
{
unsigned int len = 0, i;
char *duplicate;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
duplicate = malloc((len + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= len; i++)
duplicate[i] = str[i];
return (duplicate);
}
