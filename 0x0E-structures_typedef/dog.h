#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - creates a structure of a dog
 * @name: the first member that stores the name of dog in char
 * @age: the second member that stores the age in float
 * @owner: the third member that store the string of the owners
 * name
 * Description: this structure stores information about a dog;
 * the name, age and its owner
 */
struct dog
{
	char *name;

	float age;

	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
