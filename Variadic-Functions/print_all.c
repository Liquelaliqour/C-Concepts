#include "print.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 * or char * is ignored.
 * If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	void (*func)(va_list);
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && (*(format + i)))
	{
		func = get_format(*(format + i));

		printf("%s", separator);
		func(args);
		separator = ", ";
		i++;
	}

	printf("\n");

	va_end(args);
}
