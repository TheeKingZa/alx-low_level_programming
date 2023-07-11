0x15. C - File I/O
C
Syscall.


File I/O and System calls
-------
General
-------

Look for the right source of information online
How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls open, close, read and write
What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call.


A system call is a mechanism provided by the operating system that allows user-level programs to request services from the kernel.
It provides an interface between the user space and the kernel space.
System calls are typically used for low-level operations that require privileged access or interaction with hardware devices.

The main difference between a function and a system call is that a function is executed within the user space, while a system call transitions from the user space to the kernel space.
When a system call is invoked, the CPU switches from user mode to kernel mode, giving the operating system direct control over the hardware and resources.
This allows system calls to perform privileged operations such as file I/O, process management, network communication, and more.

Functions, on the other hand, are routines or procedures that are executed within the user space.
They operate on data within the same process and do not require a transition to the kernel.
Functions are typically part of a programming language's standard library or custom libraries and provide reusable code to perform specific tasks.

In the context of file I/O, system calls such as open, close, read, and write are used to interact with files.
These system calls allow you to create, open, close, read from, and write to files. They operate on file descriptors, which are small non-negative integers representing open files within a process.

The three standard file descriptors are:

Standard Input (STDIN): Represented by file descriptor 0.
It is used for reading input from the user or other sources.

Standard Output (STDOUT): Represented by file descriptor 1. It is used for writing output to the console or other destinations.

Standard Error (STDERR): Represented by file descriptor 2. It is used for writing error messages or diagnostic information.


The POSIX names for these file descriptors are STDIN_FILENO, STDOUT_FILENO, and STDERR_FILENO, respectively.

When using the open system call, you can specify different flags to control the file's behavior. Some common flags are:

* O_RDONLY: Open the file for reading only.
* O_WRONLY: Open the file for writing only.
* O_RDWR: Open the file for both reading and writing.

File permissions determine who can access and perform operations on a file.
When creating a file with the open system call, you can specify the file permissions using the mode parameter.
The permissions are represented using octal values and define the read, write, and execute permissions for the owner, group, and others.

To summarize, system calls are low-level functions provided by the operating system that allow user-level programs to access privileged operations and interact with hardware.
File I/O system calls such as open, close, read, and write are used for file operations, and file descriptors are used to represent open files within a process.
The three standard file descriptors are STDIN, STDOUT, and STDERR, with POSIX names STDIN_FILENO, STDOUT_FILENO, and STDERR_FILENO. Functions, on the other hand, are routines executed within the user space and operate on data within the same process.
