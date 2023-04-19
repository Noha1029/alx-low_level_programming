#include <stdio.h>
/**
* array_iterator - executes funct
* @array: array of elements
* @size: array's size
* @action: pointer to function
* Return: No
*/
void array_iterator(int *array, size_t size, void (*act)(int))
{
unsigned int i;
if (array && size && act)
{
for (i = 0; i < size; i++)
{
(*act)(array[i]);
}
}
}
