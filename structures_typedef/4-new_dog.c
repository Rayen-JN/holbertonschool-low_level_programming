#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name = strlen(name);
	int len_owner = strlen(owner);

	dog = malloc(sizeof(div_t));
	if (!dog)
	{
		return (NULL);
	}
	dog->name = malloc((sizeof(char) * len_name) + 1);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc((sizeof(char) * len_owner) + 1);
	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

