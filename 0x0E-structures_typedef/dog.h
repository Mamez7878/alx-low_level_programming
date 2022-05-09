#ifndef STRUCTS
#define STRUCTS

/**
 * stuct dog - description for dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: owner
 *
 * Description: Long description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
