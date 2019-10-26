#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int i;

	while (format == NULL)
		return;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printchar(va_arg(ap, int));
		case 's':
			printstring(va_arg(ap, char *));
		case '%':
			printpercent
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
