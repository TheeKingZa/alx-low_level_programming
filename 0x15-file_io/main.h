#ifndef MAIN_H
#define MAIN_H

/* include files */
#include <unistd.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

int _putchar(char c);
int copy_files(const char *file_from, const char *file_to);





#endif /* MAIN_H */

