#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Handle errors and exit the program with an appropriate error code.
 * @code: The error code to exit with.
 * @message: The error message format.
 * @arg: An argument to include in the error message.
 */
void error_exit(int code, const char *message, const char *arg) {
    char error_message[1024];
    sprintf(error_message, message, arg);
    dprintf(STDERR_FILENO, "%s\n", error_message);
    exit(code);
}

/**
 * copy_file - Copy the content of one file to another.
 * @file_from: The path to the source file.
 * @file_to: The path to the destination file.
 */
void copy_file(const char *file_from, const char *file_to) {
    int fd_src, fd_dest;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];
    char fd_src_str[12], fd_dest_str[12];

    fd_src = open(file_from, O_RDONLY);
    if (fd_src == -1) {
        error_exit(98, "Error: Can't read from file %s\n", file_from);
    }

 
    fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_dest == -1) {
        error_exit(99, "Error: Can't write to file %s\n", file_to);
    }

    while (1) {
        bytes_read = read(fd_src, buffer, BUFFER_SIZE);
        if (bytes_read == -1) {
            error_exit(98, "Error: Can't read from file %s\n", file_from);
        }
        if (bytes_read == 0) {
            break;
        }

        bytes_written = write(fd_dest, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            error_exit(99, "Error: Can't write to file %s\n", file_to);
        }
    }

    
    if (close(fd_src) == -1) {
        snprintf(fd_src_str, sizeof(fd_src_str), "%d", fd_src);
        error_exit(100, "Error: Can't close fd %s\n", fd_src_str);
    }

    
    if (close(fd_dest) == -1) {
        snprintf(fd_dest_str, sizeof(fd_dest_str), "%d", fd_dest);
        error_exit(100, "Error: Can't close fd %s\n", fd_dest_str);
    }
}

int main(int argc, char *argv[]) {
     const char *file_from = argv[1];
  const char *file_to = argv[2];

	if (argc != 3) {
        error_exit(97, "Usage: cp file_from file_to\n", NULL);
    }

    copy_file(file_from, file_to);

    return (0);
}
