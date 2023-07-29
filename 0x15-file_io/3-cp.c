#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * copy_files - Copies the contents of one file to another file.
 * @file_from: The name of the source file to copy from.
 * @file_to: The name of the destination file to copy to.
 *
 * Return: 0 on success, or exit with appropriate error codes on failure.
 */
int copy_files(const char *file_from, const char *file_to)
{
    int from, to, r, w;
    char buffer[BUFFER_SIZE];

    /* Open the source file "file_from" for reading*/
    from = open(file_from, O_RDONLY);
    if (from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    /* Open or create the destination file "file_to" for writing*/
    to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(from); /* Close the source file descriptor before exiting*/
        exit(99);
    }

    /* Copy the contents from the source file to the destination file*/
    while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
    {
        w = write(to, buffer, r);
        if (w == -1 || w != r)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(from);
            close(to);
            exit(99);
        }
    }

    if (r == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(from);
        close(to);
        exit(98);
    }

    /* Close both files after successful copying*/
    if (close(from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
        exit(100);
    }

    if (close(to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
        exit(100);
    }

    return (0); /* Return 0 to indicate success*/
}
