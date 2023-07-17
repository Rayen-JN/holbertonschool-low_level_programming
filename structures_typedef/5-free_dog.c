#include "dog.h"
/**
 * free_dog - a function that frees dogs.
 * d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free((*d).age);
		free(d);
	}
}