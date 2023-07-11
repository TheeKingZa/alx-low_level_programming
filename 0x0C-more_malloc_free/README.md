0x0C MORE MALLOC FREE

How to use the exit function:
The exit function is used to terminate the execution of a program. It is defined in the <stdlib.h> header file. The function takes an integer argument called the exit status, which indicates the reason for termination. Here's an example usage:

#include <stdlib.h>

int main() {
    /* Code before exit */

    exit(0); /* Terminate the program with exit status 0 */
}
======
The exit status can be used to communicate information about the program's termination to the operating system or calling process.
=============================================

2.calloc and realloc functions from the standard library:
Both calloc and realloc are memory allocation functions provided by the standard library <stdlib.h>.

calloc is used to dynamically allocate memory for an array of elements. It initializes the allocated memory to zero. The function takes two arguments: the number of elements and the size of each element. It returns a pointer to the allocated memory or NULL if the allocation fails. Here's an example:

#include <stdlib.h>

int main() {
    int* array;
    int size = 5;

    array = (int*)calloc(size, sizeof(int));
    if (array == NULL) {
        /* Handle allocation failure */
    }

    /* Use the allocated memory */

    free(array); /* Free the allocated memory when done */
}
====================================

realloc is used to resize a previously allocated block of memory. It takes two arguments: a pointer to the previously allocated memory block and the new size in bytes. The function returns a pointer to the newly allocated memory block, which may be the same as the original pointer or a different location. Here's an example:

#include <stdlib.h>

int main() {
    int* array;
    int size = 5;

    array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        /* Handle allocation failure */
    }

    /* Use the allocated memory */

    size = 10;
    int* resized_array = (int*)realloc(array, size * sizeof(int));
    if (resized_array == NULL) {
        /* Handle reallocation failure */
    }

    /* Use the resized memory */

    free(resized_array); /* Free the allocated memory when done */
}
---------------------------------------------------------------------

NOTE! It's important to note that when using realloc, you should assign the returned pointer to a new variable in case the reallocation fails and returns NULL.
--
