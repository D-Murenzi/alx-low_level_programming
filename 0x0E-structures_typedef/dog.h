#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


/**
 * struct dog-is a structure about dog
 * @name: stands for name of the dog
 * @age: the age of the dog
 * @owner: who owns the dog
 *
 * Description: stores information on dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
