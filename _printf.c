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
			print_c(va_arg(ap, int));
		case 's':
			print_s(va_arg(ap, char *));
		case '%':
			print_p
				find the next character after %;
			get type with next character
		case 'd':
			print_d(va_arg(ap, int));
		case 'i':
			print_i(va_arg(ap, int));
		default:
			break;
		}
		i++;
	}
	print_c('\n');
	va_end(ap);

}
