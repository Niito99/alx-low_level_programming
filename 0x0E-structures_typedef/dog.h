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

#endif
