#include <stdio.h>
#include "main.h"
/**
* flip_bits - Write a function that returns the number of bits you would
* need to flip to get from one number to another.
* Prototype: unsigned int flip_bits(unsigned long int a, unsigned long int b);
* You are not allowed to use the % or / operators
* @a: Number Input 1.
* @b: Number Input 2.
* Return: Number of flip in the Input numbers.
*/
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
unsigned int flip = 0, comp, comp1;
while (!(a == 0 && b == 0))
{
comp = a & 1;
comp1 = b & 1;
a = a >> 1;
b = b >> 1;
if (comp != comp1)
flip += 1;
}
return (flip);
}
