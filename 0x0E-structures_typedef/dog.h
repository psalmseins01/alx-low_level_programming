#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure named dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#include <stdio.h>
#endif