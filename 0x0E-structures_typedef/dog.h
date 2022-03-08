#ifndef dog_h
#define dog_h
/**
 *struct dog - asg
 *@name: name
 *@age: age
 *@owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_y;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


dog_y *new_dog(char *name, float age, char *owner);

void free_dog(dog_y *d);
#endif
