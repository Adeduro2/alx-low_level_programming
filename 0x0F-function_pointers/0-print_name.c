#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print a name as is
 * @name: Name to print
 * @f: Pointer to void function, taking a char * as arg
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
