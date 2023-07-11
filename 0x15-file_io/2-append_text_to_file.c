#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Appends text at the end of file.
 *
 * @filenames: A pointer to the name of the file.
 * @text_content: string to add at the end of file.
 *
 * Return:      --1. if function fails or filename is NULL.
 *              --1 if file doesn't exist and lack write permissions.
 *              Otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for(len = 0; text_content[len];)
len++;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 || w == -1)

return (-1);

close(o);

return (1);
}
