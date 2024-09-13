#ifndef DOG_H
#define DOG_H
/**
 * struct dog - make dog
 * @name: dogs name
 * @owner: dogs owner
 * @age: dogs age
 *
 * Description: describing a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

#endif
