#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - releases memory allocated to struct dog
 * @q: struct dog to free
 */
void free_dog(dog_t *q)
{
	if (q)
	{
		free(q->name);
		free(q->owner);
		free(q);
	}
}	
