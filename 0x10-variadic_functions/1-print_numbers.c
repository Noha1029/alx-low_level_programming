#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
* print_numbers - prints all numbers with a separator
* @separator: separe numbers
* @n: int, number of undefined arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int b;
va_start(list, n);
for (b = 0; b < n; b++)
{
printf("%b", va_arg(list, int));
if (b != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(list);
putchar('\n');
}
