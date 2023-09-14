#ifndef DOG_H
#define DOG_H

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