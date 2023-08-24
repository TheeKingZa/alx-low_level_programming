-----------------
Dynamic libraries
------------------
0x18.C
-------

A dynamic library is a collection of precompiled functions and code that can be used by multiple programs. It is loaded into memory at runtime when the program that uses it is executed. Dynamic libraries are also known as shared libraries because they are shared among multiple programs, reducing the overall disk space usage and memory consumption.

---------------------------------------------------------------------------------------------------------
How Dynamic Libraries Work:
---------------------------------------------------------------------------------------------------------

Compilation: A dynamic library is compiled separately from the main program. It contains compiled code for various functions that can be used by multiple programs.

Linking: During compilation, the code references function calls from the dynamic library using placeholders. These placeholders are resolved during the linking phase, and information about the dynamic library's location is stored in the program's executable.

Runtime Loading: When the program is executed, the operating system's dynamic linker/loader loads the dynamic library into memory and resolves the placeholders with actual function addresses from the library.

Sharing: Since multiple programs can reference the same dynamic library, the library's code is loaded into memory only once. This results in memory savings and allows for easier updates to library code without recompiling every program that uses it.

---------------------------------------------------------------------------------------------------------
Creating a Dynamic Library:
---------------------------------------------------------------------------------------------------------

Creating a dynamic library involves the following steps:

Write the library's source code.
Compile the source code into a shared object file (.so on Linux, .dll on Windows) using a compiler with appropriate flags.
Optionally, install the library to system directories using package management tools.

---------------------------------------------------------------------------------------------------------
Using a Dynamic Library:
---------------------------------------------------------------------------------------------------------

To use a dynamic library in your program:

Include the library's header files in your code.
During compilation, provide the necessary compiler flags and paths to link against the library.
Ensure that the library is in a directory known to the system's dynamic linker/loader.

---------------------------------------------------------------------------------------------------------
$LD_LIBRARY_PATH:
---------------------------------------------------------------------------------------------------------

$LD_LIBRARY_PATH is an environment variable that lists directories to search for shared libraries before the system's default directories. It allows you to specify additional locations for the dynamic linker to search for shared libraries at runtime.

---------------------------------------------------------------------------------------------------------
Differences between Static and Shared Libraries:
---------------------------------------------------------------------------------------------------------

Static Libraries: Compiled into the program binary, resulting in larger executables. They are independent of the system's dynamic linker/loader. Each program has its own copy of the library functions. Updates require recompilation of programs.

Shared Libraries (Dynamic Libraries): Loaded at runtime, resulting in smaller executables. Multiple programs can share the same library, leading to memory savings. Updates to the library affect all programs using it without recompilation.

---------------------------------------------------------------------------------------------------------
Basic Commands:
================-----------------------------------------------------------------------------------------

* nm:
		# Displays symbol information from object files or libraries.
---------------------------------------------------------------------------------------------------------
* ldd:
		# Lists the shared libraries a program is linked against.
---------------------------------------------------------------------------------------------------------
* ldconfig:
		# Updates the cache of shared libraries on Linux systems, making it easier
		  for the dynamic linker to find libraries.
---------------------------------------------------------------------------------------------------------


These concepts priovide the foundation for creating efficient and modular software by allowing the reuse of code across multiple programs.
