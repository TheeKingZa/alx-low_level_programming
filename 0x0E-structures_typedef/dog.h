#ifndef DOG_H
#define DOG_H

/*Include_files*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 1. Structure. */
/**
 * struct dog - Structure representing a dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This structure represents a dog with its name,
 *		age, and owner's name.
 */

struct dog
{
char *name;
float age;
char *owner;
};

/* 2. Structure. */
/**
 * struct dog - Structure representing a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(const dog_t *d);
#endif /* DOG_H */

