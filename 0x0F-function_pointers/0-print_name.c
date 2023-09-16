#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print a name as is
 * @name: Name to print
 * @f: Pointer to void function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
