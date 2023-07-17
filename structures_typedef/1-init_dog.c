#include "dog.h"
/**
 *init_dog - initialize a variable of type struct dog
 *@owner: dog owner
 *@name: dog name
 *@age: dog age
 *@d: ptr
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
