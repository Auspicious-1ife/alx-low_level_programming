#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends text_content to a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *fp = fopen(filename, "a");
if (filename == NULL)
return (-1);
if (fp == NULL)
return (-1);
if (text_content != NULL)
fputs(text_content, fp);
fclose(fp);
return (1);
}
