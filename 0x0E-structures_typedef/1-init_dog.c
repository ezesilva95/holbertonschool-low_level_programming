#include <stdio.h>
#include "dog.h"
/**
 *init_dog - nitialize a variable of type struct dog
 *@d: details
 *@name: dogs name
 *@age: dogs age
 *@owner: dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
