#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, k, j;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	new_dog->name = malloc(n * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < n; j++)
		new_dog->name[j] = name[j];
	new_dog->age = age;
	for (k = 0; owner[k]; k++)
		;
	k++;
	new_dog->owner = malloc(k * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < k; j++)
		new_dog->owner[j] = owner[j];
	return (new_dog);
}

