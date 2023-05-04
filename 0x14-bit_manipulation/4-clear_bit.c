#include <stdio.h>
#include "main.h"
#include <math.h>
/**
* clear_bit - Function that clear the value of a bit to 1 at a given index.
* Prototype: int set_bit(unsigned long int *a, unsigned int index);
* @index: is the index, starting from 0 of the bit you want to set.
* @a: number input.
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *a, unsigned int index)
{
int add;
if (index > 63)
return (-1);
add = 1 << index;
*a = *a & (~add);
return (1);
}
