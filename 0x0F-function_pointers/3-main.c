#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - main file
* @arga: number of lines arguments
* @argb: array of elements
* Return: 0
*/
int main(int arga, char *argb[])
{
int R;
if (argca != 4)
{
printf("Error\n");
exit(98);
}
R = (*get_op_func(argb[2]))(atoi(argb[1]), atoi(argb[3]));
printf("%d\n", R);
return (0);
}
