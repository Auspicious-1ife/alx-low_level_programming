#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Creates or truncates a file with the given filename and writes
 *               the specified text content to it.
 * @filename: The name of the file to create or truncate.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
FILE *fp = fopen(filename, "w");
struct stat buf;
if (filename == NULL)
return (-1);
if (stat(filename, &buf) == 0)
{
if (truncate(filename, 0) != 0)
{
perror("truncate");
return (-1);
}
}
else
{
int fd = open(filename, O_WRONLY | O_CREAT, 0600);
if (fd < 0)
{
perror("open");
return (-1);
}
close(fd);
}
if (fp == NULL)
{
perror("fopen");
return (-1);
}
if (text_content != NULL)
{
fputs(text_content, fp);
}
fclose(fp);
return (1);
}
