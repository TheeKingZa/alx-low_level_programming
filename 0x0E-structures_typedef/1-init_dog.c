#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct.
 *
 * @d: Pointer to the struct dog.
 * @name: Pointer to name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of dog.
 *
 * Description: This function initializes the member of struct dog.
 *		with provided values for name, age and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* assign name, owner pointer and the value of age */
	d->name = name;

	d->age = age;
	d->owner = owner;



}
