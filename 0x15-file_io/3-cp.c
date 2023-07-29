#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>  // Include this header for open() function
#include <unistd.h> // Include this header for read(), write(), and close() functions

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

    // Open the source file "file_from" for reading
    from = open(file_from, O_RDONLY);
    if (from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return 98;
    }

    // Open or create the destination file "file_to" for writing
    to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(from); // Close the source file descriptor before exiting
        return 99;
    }

    // Copy the contents from the source file to the destination file
    while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
    {
        w = write(to, buffer, r);
        if (w == -1 || w != r)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(from);
            close(to);
            return 99;
        }
    }

    if (r == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(from);
        close(to);
        return 98;
    }

    // Close both files after successful copying
    close(from);
    close(to);

    return 0; // Return 0 to indicate success
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    int result = copy_files(argv[1], argv[2]);
    if (result != 0)
    {
        return result;
    }

    printf("File copied successfully!\n");
    return 0;
}
