#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
char *buffer;
ssize_t bytes_read, bytes_written;
if (filename == NULL)
return (0);
fp = fopen(filename, "r");
if (fp == NULL)
return (0);
buffer = malloc(letters);
if (buffer == NULL)
{
fclose(fp);
return (0);
}
bytes_read = fread(buffer, 1, letters, fp);
if (bytes_read == -1)
{
free(buffer);
fclose(fp);
return (0);
}
bytes_written = fwrite(buffer, 1, bytes_read, stdout);
free(buffer);
fclose(fp);
if (bytes_written != bytes_read)
return (0);
return (bytes_read);
}
