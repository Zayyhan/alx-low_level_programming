#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - describes the type of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef dog_t - defines a new name for type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
