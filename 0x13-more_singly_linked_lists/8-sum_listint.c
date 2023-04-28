#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - Sum all of the data (a) in a list.
* @head: Address of the first node of the list.
* Return: Integer.
**/
int sum_listint(listint_t *head)
{
int total = 0;
while (head != NULL)
{
total += head->a;
head = head->next;
}
return (total);
}
