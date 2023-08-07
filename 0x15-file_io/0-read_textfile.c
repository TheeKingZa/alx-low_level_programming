#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints
 *	it to the POSIX standard output.
 *
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/* File descriptor */
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	return (0);/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
/* Read from the file */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
/* Write to standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bytes_written);
}
