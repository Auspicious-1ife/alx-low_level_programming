#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything.
 * @format: The list of types of arguments passed to the function.
 *
 * Description: This function prints a variable number of arguments based on
 * the format string. Supported format characters are: 'c' for char, 'i' for
 * integer, 'f' for float, and 's' for char *. If the string is NULL, it will
 * print "(nil)" instead. Any other character is ignored.
 */
void print_all(const char * const format, ...)
{
va_list args;
char *str;
int i = 0;
char c;
va_start(args, format);
while (format && format[i])
{
c = format[i];
switch (c)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
i++;
continue;
}
if (format[i + 1])
printf(", ");
i++;
}
va_end(args);
printf("\n");
}
