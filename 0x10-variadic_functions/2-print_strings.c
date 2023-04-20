#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
* print_strings - prints all strings with a separator
* @separator: separe strings
* @n: int, number of undefined arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int d;
char *c;
va_start(list, n);
for (d = 0; d < n; d++)
{
c = va_arg(list, char*);
if (c != NULL)
printf("%s", c);
else
printf("(nil)");
if (d != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(list);
putchar('\n');
}
