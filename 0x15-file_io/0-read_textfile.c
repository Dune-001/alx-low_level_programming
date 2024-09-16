#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to posix standard output
 * @filename: text file to read
 * @letters: number of characters to read
 *
 * Return: words written to posix output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes_read, bytes_written;
    char *buffer;

    if (filename == NULL)
        return (0);
    fd  = open(filename, O_RDONLY); // OPEN FILE FOR READING
    if (fd == -1) // if opening fails
        retturn (0);
    buffer = malloc(sizeof(char) * letters); // allocate buffer to store content
    if (buffer == NULL)
        close(fd);
        return (0);
    bytes_read = read(fd, buffer, letters); // read file
    if (bytes_read == -1) // if reading fails
        free(buffer);
        close(fd);
        return (0);
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read); // write content to standard output
    if (bytes_written == -1 || bytes_written != bytes_read) // if writing fails
    {
        free(buffer);
        close(fd);
        return (0);
    }
    free(buffer);// clean up bufffer
    close(fd); // close fd
    return (bytes_written);
}