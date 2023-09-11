#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - free the data
  * @d: dog information
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
