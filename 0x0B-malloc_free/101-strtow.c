#include <stdlib.h>
#include "main.h"
/**
 * word_count - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
				in_word = 0;
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		str++;
	}
	return (count);
}
/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, k, len, wc;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;

		len = 0;
		while (str[len] != ' ' && str[len] != '\t' &&
		       str[len] != '\n' && str[len] != '\0')
			len++;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = str[j];
		words[i][j] = '\0';

		str += len;
	}
	words[wc] = NULL;
	return (words);
}
