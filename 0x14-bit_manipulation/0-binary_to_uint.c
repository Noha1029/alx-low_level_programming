#include <stdio.h>
#include "main.h"
/**
* binary_to_uint - Function that converts a binary number to an unsigned int.
* Prototype: unsigned int binary_to_uint(const char *a);
* @a: is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0 if
* -> there is one or more chars in the string b that is not 0 or 1
* -> a is NULL
*/
unsigned int binary_to_uint(const char *a)
{
unsigned int value = 0;
if (a == NULL)
return (0);
while (*a != '\0')
{
value = value << 1;
if (*a != '1' && *a != '0')
return (0);
else if (*a == '1')
value = value | 1;
a++;
}
return (value);
}
