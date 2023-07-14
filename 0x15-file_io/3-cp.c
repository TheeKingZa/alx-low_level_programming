#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message and exits the program.
 * @msg: The error message to print.
 * @exit_code: The exit code to use when terminating the program.
 */
void error_exit(const char *msg, int exit_code)
{
ssize_t len = 0;

while (msg[len])
len++;

write(STDERR_FILENO, msg, len);
exit(exit_code);
}

/**
 * read_textfile - Reads a text file and writes its content to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of characters to read from the file.
 * Return: The number of characters actually read, or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;

fd = open(filename, O_RDONLY);
if (fd == -1)
error_exit("Error: Can't read from file ", 98);

buffer = malloc(sizeof(char) * BUF_SIZE);
if (buffer == NULL)
error_exit("Error: malloc failed\n", 98);

while (letters > 0)
{
bytes_read = read(fd, buffer, BUF_SIZE);
if (bytes_read == -1)
error_exit("Error: Can't read from file ", 98);
if (bytes_read == 0)
break;

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
error_exit("Error: Can't write to ", 99);

letters -= bytes_read;
}

free(buffer);
if (close(fd) == -1)
error_exit("Error: Can't close fd ", 100);

return (letters);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
ssize_t letters;

if (argc != 3)
error_exit("Usage: cp file_from file_to\n", 97);

letters = read_textfile(argv[1], BUF_SIZE);
if (letters == -1)
error_exit("Error: Can't read from file ", 98);

exit(EXIT_SUCCESS);
}
