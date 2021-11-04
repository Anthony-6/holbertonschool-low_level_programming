#include "variadic_functions.h"
#include <stdio.h>
/**
 * 
 * 
 * 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;

    va_start(ap, n);
    if (separator == 0)
    return;

for (i = 0; i < n; i++)

    if (separator != 0)
    printf("%d", n);

    if (n == 0)
    printf("\n");
    va_end(ap);
}
