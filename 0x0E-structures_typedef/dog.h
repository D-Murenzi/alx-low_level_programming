#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog-is a structure about dog
 * @name: stands for name of the dog
 * @age: the age of the dog
 * @owner: who owns the dog
 *
 * Description: stores information on dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
