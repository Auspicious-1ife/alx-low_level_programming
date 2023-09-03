#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates the first occurrence of character c in string s.
 * @s: Pointer to the string to be searched.
 * @c: Character to be located.
 *
 * Return: NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
