#include <stddef.h>
#ifndef FUNCTION_PIONTERS
#define FUNCTION_POINTERS
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
