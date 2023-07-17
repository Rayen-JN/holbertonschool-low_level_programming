#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - struct information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Description: this struct for dogs information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef dog my_dog;
#endif
