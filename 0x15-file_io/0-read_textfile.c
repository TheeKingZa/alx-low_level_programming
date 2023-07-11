#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints its
 *		contents to the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. Returns 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);

FILE *file = fopen(filename, "r");

if (file == NULL)
return (0);
char *buffer = malloc(sizeof(char) * (letters + 1));

if (buffer == NULL)
{
fclose(file);
return (0);
}
ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
if (bytesRead < 0)
{
fclose(file);
free(buffer);
return (0);
}
ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
if (bytesWritten < bytesRead)
{
fclose(file);
free(buffer);
return (0);
}
fclose(file);
free(buffer);
return (bytesWritten);
}

