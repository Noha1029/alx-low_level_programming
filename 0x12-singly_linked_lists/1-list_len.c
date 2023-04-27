#include "lists.h"
/**
* list_len - Calculate the number of elements.
* @a: Pointer to a list.
* Return: Integer.
**/
size_t list_len(const list_t *a)
{
const list_t *temp;
unsigned int counter = 0;
temp = a;
while (temp)
{
counter++;
temp = temp->next;
}
return (counter);
}
