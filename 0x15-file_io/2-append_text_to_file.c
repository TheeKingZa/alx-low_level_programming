#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends text_content to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
/* Variable declarations */
int file_descriptor, write_count, length = 0;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Open the file in append mode */
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);

/* Check if text_content is not NULL */
if (text_content != NULL)
{
/* Calculate the length of the string */
while (text_content[length])
length++;

/* Append the content to the file */
write_count = write(file_descriptor, text_content, length);
if (write_count == -1 || write_count != length)
{
/* Close the file and return -1 if write operation fails */
close(file_descriptor);
return (-1);
}
}

/* Close the file and return 1 to indicate success */
close(file_descriptor);
return (1);
}
