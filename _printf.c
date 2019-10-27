#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int i;

/**
get type
*/

	while (format == NULL)
		return;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			print_c(va_arg(ap, int));
		case 's':
			print_s(va_arg(ap, char *));
		case '%':
			print_p
				find the next character after %;
			get type with next character
		case 'd':
		case 'i':
		default:
			break;
		}
		i++;
	}
	_putchar('\n');
	va_end(ap);
// Return statement
}
