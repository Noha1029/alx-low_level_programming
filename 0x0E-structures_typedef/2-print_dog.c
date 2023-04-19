#include "dog.h"
#include <stdio.h>
/**
* print_dog - prints a struct dog
* @d: pointer to struct type dog
* Return: No
*/
void print_dog(struct dog *d)
{
if (d)
{
if (d->na != NULL)
{
printf("Na: %s\n", d->na);
}
else
{
printf("Na: (nil)\n");
}
printf("Age: %f\n", d->age);
if (d->owner)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
}
