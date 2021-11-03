#include "function_pointers.h"
/**
 * print_name - main function and print name given by main.c
 * @f: pointer
 * @name: pointer
 */
void print_name(char *name, void (*f)(char *))
{
    (*f)(name);
}
