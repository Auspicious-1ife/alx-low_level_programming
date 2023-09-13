#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints a name using a specified printing function.
 * @name: A pointer to the name to be printed.
 * @f: A function pointer to the printing function.
 *
 * Description: This function prints the provided name using the specified
 * printing function pointed to by the function pointer 'f'.
 */
void print_name(char *name, void (*f)(char *))
{
/* Check if 'name' and 'f' are not NULL before proceeding */
if (name != NULL && f != NULL)
{
f(name);
}
}
