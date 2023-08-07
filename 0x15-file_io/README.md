0x15-File_io
-----

How to use Open, Close, Read and write FILES:
----
code
--Example--

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    /* Create and open a file*/
    int fd = open("example.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening the file");
        return (1);
    }

    /* Write data to the file*/
    const char* data = "Hello, World!";
    write(fd, data, strlen(data));

    /* Close the file*/
    close(fd);

    /* Open the file for reading*/
    fd = open("example.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error opening the file");
        return (1);
    }

    /* Read data from the file*/
    char buffer[100];
    ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1) {
        perror("Error reading from the file");
        close(fd);
        return 1;
    }
    buffer[bytes_read] = '\0';
    printf("Data read: %s\n", buffer);

    /* Close the file again*/
    close(fd);

    return (0);
}

-----------------------------------

1.File Descriptors:
In Unix-like systems, file descriptors are small non-negative integers that represent an open file. They serve as a reference to the open file for read/write operations. The first three file descriptors (0, 1, and 2) are reserved for standard input (stdin), standard output (stdout), and standard error (stderr), respectively.

2.The 3 Standard File Descriptors and their POSIX Names:

0: Standard Input (stdin)
1: Standard Output (stdout)
2: Standard Error (stderr)

3.Usage of I/O System Calls:

* open: Used to open a file with specified options and permissions.
* close: Used to close an open file descriptor.
* read: Used to read data from an open file into a buffer.
* write: Used to write data from a buffer to an open file.

4.Flags O_RDONLY, O_WRONLY, O_RDWR:

* O_RDONLY: Open the file for read-only access.
* O_WRONLY: Open the file for write-only access.
* O_RDWR: Open the file for both read and write access.

5.File Permissions when creating a file with open:
The file permissions can be set using the mode argument when calling open with the O_CREAT flag. The permissions are represented using octal notation. For example, 0644 grants read and write permissions to the owner, and read-only permissions to others.

6.System Call:
A system call is a request made by a user-space program to the kernel for performing privileged operations or accessing services provided by the operating system. In C, system calls are typically invoked through wrapper functions, such as open, close, read, write, etc.

7.Difference between a Function and a System Call:

* Function: A function is a block of code that performs a specific task and is part of a program or library. Functions are called directly from the program and execute within the same user space as the program.
* System Call: A system call is a request for services from the operating system made by a user-space program. When a system call is made, the program switches to kernel mode, and the operating system performs the requested operation on behalf of the program in kernel space. System calls provide access to privileged operations that cannot be directly executed from user space.
------------------------------------------------------------------

