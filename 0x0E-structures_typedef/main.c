#include "dog.h"

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates the usage of the struct dog,
 *              init_dog, and print_dog functions.
 *              It initializes a dog, prints its details, and returns 0.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
struct dog my_dog;

	/* Initialize the dog */
init_dog(&my_dog, "Buddy", 3.5f, "John");

	/* Print the dog */
print_dog(&my_dog);

return (0);
}

