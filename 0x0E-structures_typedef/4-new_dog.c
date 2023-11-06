#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int x, y, z;
	dog_t *nd;

	if (name == NULL || owner == NULL)
		return (NULL);

	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
		return (NULL);

	for (x = 0; name[x]; x++)
		;
	x++;
	nd->name = malloc(x * sizeof(char));

	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	for (y = 0; y < x; y++)
		nd->name[y] = name[x];
	nd->age = age;

	for (z = 0; owner[z]; z++)
		;
	z++;
	nd->owner = malloc(z * sizeof(char));
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}

	for (y = 0; y < z; y++)
		nd->owner[y] = owner[y];
	return (nd);
}
