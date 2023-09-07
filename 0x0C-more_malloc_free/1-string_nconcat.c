#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string,
 * or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
unsigned int i, j;
char *concatenated;
/* Treat NULL strings as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
/* If n is greater than or equal to len2, use the entire string s2 */
if (n >= len2)
n = len2;
concatenated = malloc((len1 + n + 1) * sizeof(char)); /* +1 for null terminator */
if (concatenated == NULL)
return (NULL);
/* Copy characters from s1 to concatenated */
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];
/* To Copy the first n characters from s2 to concatenated */
for (j = 0; j < n; j++)
concatenated[i + j] = s2[j];
concatenated[i + j] = '\0'; /* Add null terminator at the end */
return (concatenated);
}
