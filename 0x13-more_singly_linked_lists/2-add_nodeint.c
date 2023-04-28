#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - Add a new node at the beginning of a list.
* @head: Address of the first node of a list.
* @a: Integer to insert into the new node.
* Return: Address of the new node.
**/
listint_t *add_nodeint(listint_t **head, const int a)
{
listint_t *tp;
tp = malloc(sizeof(listint_t));
if (tp == NULL)
return (NULL);
tp->a = a;
tp->next = *head;
*head = tp;
return (*head);
}
