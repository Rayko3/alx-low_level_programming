#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struc about dog's informations
 *@name : pointer to the name of the dog
 *@age : pointer to the age of the dog
 *@owner : pointer to the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
