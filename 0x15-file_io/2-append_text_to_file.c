#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"
/**
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int bytes_written, length = 0;

    if (filename == NULL) // CHECK IF FILE IS NULL
        return(-1);
    fd = open(filename, O_WRONLY | O_APPEND); // OPEN FILE
    if (fd == -1) // check if file creation fails
        return (-1);
    if (text_content != NULL) // check if text content is null
    {
        while (text_content[length] != '\0')
            length++;
        bytes_written = write(fd, text_content, length);
        if (bytes_written == -1) // if write fails
        {    close(fd); // close file
            return (-1);
        }
    }
    close(fd); // close file
    return (1); // return 1 if successful
}