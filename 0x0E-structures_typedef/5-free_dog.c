#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - Write a function that frees dogs.
  * @d: details
  * Return: .asga
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
