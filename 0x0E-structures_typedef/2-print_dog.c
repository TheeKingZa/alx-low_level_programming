#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints details of struct dog.
 *
 * @d: Pointer to struct dog.
 *	to be printed.
 *
 * Description: This function prints name, age and owner.
 *		if ANY element is NULL, print nil.
 *		instead if input struct pointer is Null.
 *		prints Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/*Information bein printed from struct dog*/
		printf("Name: %s.\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.2f.\n", d->age);
		printf("Owner: %s.\n", (d->owner != NULL) ? d->owner : "(nil)");
	}



}
