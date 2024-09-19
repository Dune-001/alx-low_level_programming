#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - creates a file and writes content of text_content to the file
 * @filename: file to write
 * @text_content: ontent to write to  the file
 *
 * Return: 1 if it is succesful, -1 if it is unsuccessful
 */
int create_file(const char *filename, char *text_content)
{
    int fd;
    int bytes_written, length = 0;

    if (filename == NULL) // check if filename is null
        return(-1);
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return(-1);
    if (text_content != NULL) // if text_content isn't null write its  content to file
    {
        while (text_content[length] != '\0') // find length of the text content
            length++;
        bytes_written = write(fd, text_content, length); // write text_content to file
        if (bytes_written == -1) // if writing fails
        {
            close(fd);
            return (-1);
        }
    }
    close(fd); // close file
    return  (1); //  return 1 if successful
}