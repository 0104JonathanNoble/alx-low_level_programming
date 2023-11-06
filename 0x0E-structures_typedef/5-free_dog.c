#include <stdlib>
#include "dog.h"
/**
 * free_dog - frees memory allocated for a struct dog
 * @d: value of struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
