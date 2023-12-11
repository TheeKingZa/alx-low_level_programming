# Makefiles
[]() 0x1C [>](https://github.com/TheeKingZa/alx-low_level_programming/blob/master/0x1E-search_algorithms/README.md)
----

Resources
Read or watch:

* [Makefile](https://opensource.com/article/18/8/what-how-makefile)
* [Installing the make utility](https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/)
* [make-official documentation](https://www.gnu.org/software/make/manual/html_node/)

# NEED TO KNOW?
* [What are make, Makefiles](#what-are-make-and-makefiles)
* [When](#when), [why](#why) and [how](#how) to use [Makefiles](#when-why-and-how-to-use-makefiles)
* [What are rules and how to set and use them](#what-are-rules-and-how-to-set-and-use-them)
* [What are explicit and implicit rules]()
* [What are the most common / useful rules]()
* [What are variables and how to set and use them]()

## What are Make and Makefiles?

Make is a build automation tool used in software development to compile and build programs from source code. Makefiles are configuration files used by Make to define how the program should be built.

## When, Why, and How to Use Makefiles?

### When:
Makefiles are used when you have a project with multiple source files, and you want to automate the build process.

### Why:
Makefiles make it easy to manage complex projects with many dependencies, and they ensure that only the necessary files are recompiled when changes are made.

### How:
To use Makefiles, you create a file named "Makefile" or "makefile" in your project directory, defining the rules for building your project.

## What Are Rules and How to Set and Use Them?

In a Makefile, rules define how to build specific targets. A rule typically consists of a target, prerequisites, and commands.

```make
target: prerequisites
    commands

* Target: The file or action you want to build.
* Prerequisites: The files or actions that the target depends on.
* Commands: The actions to execute for building the target.

# What Are Explicit and Implicit Rules?
Explicit Rules:
Explicit rules are defined in the Makefile and specify how to build a target directly. You provide the recipe for building the target.

# Implicit Rules:
Implicit rules are built-in rules that Make uses when there is no explicit rule for a target. They are predefined for common file types, like C source files.

What Are the Most Common/Useful Rules?
Some common and useful rules in a Makefile include:

needed. include this in your project's documentation and adapt it as
-bash: bad substitution: no closing "`" in `make
target: prerequisites
    commands

* Target: The file or action you want to build.
* Prerequisites: The files or actions that the target depends on.
* Commands: The actions to execute for building the target.

## What Are Explicit and Implicit Rules?

Explicit Rules:
Explicit rules are defined in the Makefile and specify how to build a target directly. You provide the recipe for building the target.

## Implicit Rules:

Implicit rules are built-in rules that Make uses when there is no explicit rule for a target. They are predefined for common file types, like C source files.

What Are the Most Common/Useful Rules?
Some common and useful rules in a Makefile include:

* all : Builds the entire project.
* clean : Remove generated files.
* install : Installs the program.
* test : Runs tests
* help : Displays help information.

What Are Variables and How to Set and Use Them?
Variables in Makefiles allow you to store values that can be reused throughout the file. You can set and use variables as follows:

==make==
--Code--

CC = gcc
CFLAGS = -Wall -O2

target: prerequisites
    $(CC) $(CFLAGS) $< -o $@

-----

* CC : Compiler executable.
* CFLAGS : Compiler flags.

By using variables, you can make your Makefile more flexible and easier to maintain.

This README provides an overview of Make and Makefiles, their use cases, rules, and variables. For detailed instructions and examples, refer to the project's specific Makefile.

==Code==

This README should give users a good starting point for understanding Make and Makefiles, how to use them, and the key concepts involved. You can include this in your project's documentation and adapt it as needed.
0-makefile.

---------------------------------------------------------


0-makefile
-----------

This Makefile has three rules:

* all : this is the default rule, and it builds the school executable using the specified compilation command.

* clean : This rule removes the school executable, helping to clean up generated files.

* run : This rule first builds the school executable (if not already built) and then runs it.

The .PHONY target is used to declare all and run as phony targets, which ensures they are executed even if files with the same names exist in the directory.

1. Save the Makefile.
2. Open your terminal and navigate to the project directory, where the Makefile is located.
3. Use the following command to build the "school" executable:

make -f 0-makefile

-- This command tells Make to use "0-makefile" as the makefile for this operation.

1. After the build is successful, you can run the "school" executable using the following command:

./school
---to run program.
-------------------------------------------------------------------
