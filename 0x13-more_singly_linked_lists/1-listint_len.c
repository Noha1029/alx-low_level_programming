#include "lists.h"
/**
* listint_len - Calculate the number of elements.
* @b: Pointer to a list.
* Return: Integer.
**/
size_t listint_len(const listint_t *b)
{
const listint_t *tp;
unsigned int cnr = 0;
tp = b;
while (tp)
{
cnr++;
tp = tp->next;
}
return (cnr);
}
