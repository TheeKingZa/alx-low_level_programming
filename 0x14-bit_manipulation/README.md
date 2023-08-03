0x14. C - Bit manipulation

1.
malloc:
malloc stands for "memory allocation" and is used to dynamically allocate memory during program execution. It allows you to request a specific amount of memory from the operating system, and it returns a pointer to the beginning of the allocated memory block. The memory allocated using malloc remains allocated until it is explicitly deallocated using the free function.
Syntax:
---
void *malloc(size_t size);
---

example: 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr;

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    free(arr); // Don't forget to free the allocated memory when done.
    return 0;
}

=========

2.
free:
free is used to release the memory allocated by malloc or related functions. It deallocates the memory block pointed to by the given pointer, making it available for future allocations.
Syntax:
----
void free(void *ptr);
----

example:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    free(arr); // Release the allocated memory.
    return 0;
}

==========

3.
exit:
exit is used to terminate the program's execution and return control to the operating system. It can also be used to indicate the program's termination status using an exit code. A non-zero exit code usually indicates an error, while 0 indicates successful termination.
Syntax:
void exit(int status);
----

example:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Error: Invalid input.\n");
        exit(1); // Terminate with an error status.
    }

    // Perform some operations with 'num'...

    printf("Program executed successfully.\n");
    exit(0); // Terminate with a success status.
}

==========

Remember, using malloc and free requires proper memory management to avoid memory leaks. Always free the memory allocated using malloc when it is no longer needed to prevent memory leaks and potential program instability. Also, use exit judiciously; in many cases, it's better to let the program reach its natural termination point without calling exit.




