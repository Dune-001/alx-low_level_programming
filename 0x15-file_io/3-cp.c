#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
/**
 * main - entry point to cp prog
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 on success, exit with various error codes on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_bytes, write_bytes;
    char buffer[BUFFER_SIZE];

    if (argc != 3) // check for correct number of arguments
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    fd_from = open(argv[1], O_RDONLY); // OPEN FILE_FROM FOR READING
    if (fd_from == -1) // if reading fails
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) // if open fails
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        exit(99);
    }
    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0) // READ FRO, FILE_FROM
    {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes == -1 || write_bytes != read_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }
    if (read_bytes == -1) // error handling
    {
        dprintf(STDERR_FILENO, "Error: Can't read fromfile %s\n", argv[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }
    if (close(fd_from) == -1) // close file descriptor fd_from
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1) // close file descriptor fd_to
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
    return (0);
}